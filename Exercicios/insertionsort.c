#include <stdio.h>
#define TAM 10

int main() {
  int nums[TAM];
  int *ptr;
  int aux;
  for (ptr = nums; ptr < nums + TAM; ptr++) {
    printf("digite o um número: ");
    scanf("%d", ptr);
  }

  for (ptr = nums; ptr < nums + (TAM - 1); ptr++) {
    for (int *ptr2 = ptr + 1; ptr2 > nums; ptr2--) {
      int *ptrAnterior = ptr2 - 1;
      if (*ptr2 < *ptrAnterior ) {
        aux = *ptr2;
        *ptr2 = *ptrAnterior;
        *ptrAnterior = aux;
      }
    }
  }

  for (ptr = &nums[0]; ptr < &nums[TAM]; ptr++) {
    printf("%d\n", *ptr);
  }

  return 0;
}