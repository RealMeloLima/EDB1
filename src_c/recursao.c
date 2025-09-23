#include "../include_c/recursao.h"

int recursao(const char *str, char alvo) {
    if (*str == '\0') {
        return 0;
    }

    int count_atual = 0;
    if (*str == alvo) {
        count_atual = 1;
    }
    
    return count_atual + recursao(str + 1, alvo);
}