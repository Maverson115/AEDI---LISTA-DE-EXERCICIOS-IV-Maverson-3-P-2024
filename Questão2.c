#include <stdio.h>

void main() {
    int numero, i = 1;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    printf("Números pares entre 1 e %d:\n", numero);
    while (i <= numero) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");
    return 0;
}
