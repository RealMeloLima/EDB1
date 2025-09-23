#include <stdio.h>
#include "busca_seq_ordenada.h"
#include "busca_binaria.h"
#include "recursao.h"

#define RUN_TEST(name, expr, expected)                               \
    do {                                                             \
        int result = (expr);                                         \
        printf("%-25s : %s\n", name,                                  \
               (result == (expected)) ? "OK" : "FAIL");              \
    } while(0)

int main() {
    int arr1[] = {4, 2, 1, 4, 2, 1}; [cite_start]
    int n1 = 6;

    int n_versoes = 5; [cite_start]

    const char* str_recursiva = "banana";

    RUN_TEST("Especialidades distintas", conta_especialidades_distintas(arr1, n1), 3); [cite_start]
    RUN_TEST("Busca binaria", busca_binaria(n_versoes), 4); [cite_start]
    RUN_TEST("Recursao", recursao(str_recursiva, 'a'), 3); [cite_start]

    return 0;
}