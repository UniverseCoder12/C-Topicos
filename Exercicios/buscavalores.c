#include <stdbool.h>

int main()
{
    int nums[8];
    int num = 0;
    bool esta = false;

    for(int i = 0; i < 8; i++)
    {
        int n = i+1;
        printf("digite o %d° número: ", n);
        scanf("%d", &nums[i]);
    }
    printf("digite um número qualquer: "); 
    scanf("%d", &num);
    for(int i = 0; i < 8; i++)
    {
        if(num == nums[i])
        {
            printf("Número presente na posição %d\n", i);
            esta = true;
        }
    }
    if(!esta)
    {
        printf("O número não está na lista!!!\n");
    }
    return 0;
}