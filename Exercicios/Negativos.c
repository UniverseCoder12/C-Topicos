int main() {
    int vtr[10];

    for(int i = 0; i < 10; i++) {
        printf("Digite o %d° valor: ", i + 1);
        scanf("%d", &vtr[i]);
    }

    for(int i = 0; i < 10; i++) {
        if(vtr[i] < 0) {
            vtr[i] = 0;
        }
    }

    printf("\nVetor resultante:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d ", vtr[i]);
    }

    printf("\n");

    return 0;
}