#include "../include_c/busca_seq_ordenada.h"

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int busca_seq_ordenada(int arr[], int n, int alvo) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == alvo) {
            return i;
        }
    }
    return -1;
}

int conta_especialidades_distintas(int arr[], int n) {
    if (n <= 0) {
        return 0;
    }
    bubbleSort(arr, n);

    int count = 1;
    int i;
    for (i = 1; i < n; i++) {
        if (busca_seq_ordenada(arr, i, arr[i]) == -1) {
            count++;
        }
    }
    return count;
}