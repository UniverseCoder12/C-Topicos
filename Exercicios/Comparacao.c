#include <stdio.h>

int main() {
    int v1[5]; 
    int v2[5]; 
    int intersec[5];
    int k = 0;
    int n;
    
    for(int i = 0; i < 5; i++) 
    {
        n = i+1;
        printf("Digite o %d° elemento do primeiro vetor: ",n);
        scanf("%d", &v1[i]);
    }
    for(int i = 0; i < 5; i++) 
    {
        n = i+1;
        printf("Digite o %d° elemento do segundo vetor: ",n);
        scanf("%d", &v2[i]);
    }

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(v1[i] == v2[j]) {
                
                int existe = 0;
                for(int m = 0; m < k; m++) {
                    if(intersec[m] == v1[i]) {
                        existe = 1;
                        break;
                    }
                }

                if(!existe) {
                    intersec[k] = v1[i];
                    k++;
                }
            }
        }
    }

    if(k == 0) 
    {
        printf("Nenhum elemento em comum.");
    }
    else
    {
        printf("Elementos em comum:\n");
        for(int i = 0; i < k; i++) 
        {
            printf("%d ", intersec[i]);
        }
    }
    return 0;
}