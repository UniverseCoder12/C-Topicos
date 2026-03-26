#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nums[10];

    for(int i = 0; i < 10; i++)
    {
        int n = i+1;
        printf("digite o %d° número: ", n);
        scanf("%d", &nums[i]);
    }

    int *pares = NULL;
    int tmnpar = 0;
    int *impares = NULL;
    int tmnimpar = 0;

    // adicionando elementos dinamicamente
    for(int i = 0; i < 5; i++) {
        tmnpar++;
        lista = realloc(lista, tamanho * sizeof(int));
        lista[tamanho - 1] = i * 10;
    }

    for(int i = 0; i < tamanho; i++) {
        printf("%d\n", lista[i]);
    }

    free();
    return 0;


}