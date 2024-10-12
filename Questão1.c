#include <stdio.h>

int main() {
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    switch (idade / 18) {
        case 0:
            printf("Menor de idade\n");
            break;
        case 1:
            if (idade <= 65) {
                printf("Maior de idade\n");
            } else {
                printf("Idoso\n");
            }
            break;
        default:
            printf("Idoso\n");
            break;
    }

    return 0;
}
