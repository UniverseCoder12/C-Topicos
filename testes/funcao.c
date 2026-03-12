#include "funcao.h"

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int numero = encontrar_numero(arr, 5, 2);
    printf("%d \n", numero);
    return 0;
}

int encontrar_numero(int arr[], int tamanho, int numero)
{
    int i;
    for (i = 0; i < tamanho; i++)
    {
        if (arr[i] = numero)
        {
            return i;
        }
        else
        {
            return -1;
        }
    }
}