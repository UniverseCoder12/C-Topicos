#include <stdio.h>

int main() 
{
    float nums[15];
    float sm = 0;
    float maior;
    float menor;
    float media;

    for(int i = 0; i < 15; i++) {
        printf("Digite o %d° número: ", i + 1);
        scanf("%f", &nums[i]);

        sm += nums[i];

        if(i == 0) 
        {
            maior = nums[i];
            menor = nums[i];
        } 
        else 
        {
            if(nums[i] > maior) 
            {
                maior = nums[i];
            }
            if(nums[i] < menor) 
            {
                menor = nums[i];
            }
        }
    }

    media = sm / 15;

    printf("Maior valor: %f\n", maior);
    printf("Menor valor: %f\n", menor);
    printf("Média aritmética: %f\n", media);

    return 0;
}