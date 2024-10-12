#include <stdio.h>

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }
        // Troca o maior elemento encontrado com o primeiro elemento da parte não ordenada
        int temp = arr[maxIndex];
        arr[maxIndex] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int notas[] = {85, 70, 90, 60, 75};
    int n = sizeof(notas) / sizeof(notas[0]);

    selectionSort(notas, n);

    printf("Notas em ordem decrescente: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", notas[i]);
    }
    return 0;
}
