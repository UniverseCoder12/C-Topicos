#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int pal;
    int ten = 0;
    int hst[10];
    int i = 0;
    char opc;

    do {
        int num = rand() % 100 + 1;
        int ten = 0;
        printf("Adivinhe o numero de 1 a 100\n");

        do {
            printf("Palpite: ");
            scanf("%d", &pal);
            ten++;

            if (pal > num) {
                printf("Alto\n");
            } else if (pal < num) {
                printf("Baixo\n");
            }

        } while (pal != num);

        printf("Acertou em %d tentativas\n", ten);

        if (i < 10) {
            hst[i] = ten;
            i++;
        }

        printf("Historico:\n");
        for (int j = 0; j < i; j++) {
            printf("%d ten\n", hst[j]);
        }

        printf("Jogar novamente? (s/n): ");
        scanf(" %c", &opc);

    } while (opc == 's');

    return 0;
}
    printf("Baixo\n");
            }

        } while (palpite != numero);

        printf("Acertou em %d tentativas\n", tentativas);

        if (i < 10) {
            historico[i] = tentativas;
            i++;
        }

        printf("Historico:\n");
        for (int j = 0; j < i; j++) {
            printf("%d tentativas\n", historico[j]);
        }

        printf("Jogar novamente? (s/n): ");
        scanf(" %c", &opcao);

    } while (opcao == 's');

    return 0;
}