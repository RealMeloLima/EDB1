#include "../include_c/busca_binaria.h"

int bad_version_for_test = 4;

bool isBadVersion(int version) {
    return version >= bad_version_for_test;
}

int busca_binaria(int n) {
    int esquerda = 1;
    int direita = n;
    int primeira_defeituosa = -1;

    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;
        if (isBadVersion(meio)) {
            primeira_defeituosa = meio;
            direita = meio - 1;
        } else {
            esquerda = meio + 1;
        }
    }
    return primeira_defeituosa;
}
