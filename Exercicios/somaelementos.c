#include <stdlib.h>

int main()
{
    float nums[10];
    float soma = 0;
    for(int i=0; i < 10; i++)
    {
        nums[i] = rand() % 20 + 1;
    }
    for(int i=0; i < 10; i++)
    {
        soma = soma + nums[i];
    }
    printf("%f\n", soma);

    return 0;
}