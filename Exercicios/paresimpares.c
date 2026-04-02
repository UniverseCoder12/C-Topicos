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
    for(int i = 0; i < 10; i++) {
        if (nums[i] % 2 == 0)
        {
            tmnpar++;
            pares = realloc(pares, tmnpar * sizeof(int));
            pares[tmnpar - 1] = nums[i];
        }
        else
        {
            tmnimpar++;
            impares = realloc(impares, tmnimpar * sizeof(int));
            impares[tmnimpar - 1] = nums[i];
        }
    }

    printf("pares: \n");
    for(int i = 0; i < tmnpar; i++) 
    {
        printf("%d\n", pares[i]);
    }

    printf("impares: \n");
    for(int i = 0; i < tmnimpar; i++) 
    {
        printf("%d\n", impares[i]);
    }
    return 0;
}