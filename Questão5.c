#include <stdio.h>


void bubbleSort(int arr[], int n)
  {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int buscaBinaria(int arr[], int n, int valor) {
    int esquerda = 0, direita = n - 1;
    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;
        if (arr[meio] == valor) {
            return meio; // Valor encontrado
        }
        if (arr[meio] < valor) {
            esquerda = meio + 1;
        } else {
            direita = meio - 1;
        }
    }
    return -1; // Valor não encontrado
}

int main() {
    int n;
    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);

    int arr[n];
    printf("Digite os numeros inteiros:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);

    int valor;
    printf("Digite o valor a ser buscado: ");
    scanf("%d", &valor);

    int resultado = buscaBinaria(arr, n, valor);
    if (resultado != -1) {
        printf("Valor encontrado na posição: %d\n", resultado);
    } else {
        printf("Valor não encontrado.\n");
    }

    return 0;
}
