#include <stdio.h>
#define TAM 10

int main()
{
    int nums[TAM];
    int *ptr;
    int aux;
    for(ptr = &nums; ptr < nums+TAM; ptr++)
    {
        printf("digite o um número: ");
        scanf("%d", ptr);
    }



    for(ptr = &nums; ptr < nums+TAM; ptr++)
    {
        for(int *ptr2 = ptr+1; ptr2 >= nums; ptr2--)
        {
            if (*ptr2 < *(ptr2+1)) {
                aux = *ptr2;
                *ptr2 = *(ptr2+1);
                *(ptr2+1) = aux;
            }
            
        }
    }

    for(ptr = &nums[0]; ptr < &nums[TAM]; ptr++)
    {
        printf("%d\n", *ptr);
    }

    return 0;
}