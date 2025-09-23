IMD0029 - Atividade Prática 01: Algoritmos de Busca + Recursão
Sobre a Atividade
Esta atividade prática tem como objetivo exercitar a implementação de algoritmos de busca e o conceito de recursão. O projeto foi desenvolvido para as linguagens C ou C++ e aborda a busca sequencial, busca binária e uma função recursiva para contagem de caracteres.

Estrutura do Projeto
A estrutura de diretórios foi fornecida pelo professor e deve ser mantida para a compilação correta dos testes.

Atividade_1/
|-- include_c/
|   |-- busca_binaria.h
|   |-- busca_seq_ordenada.h
|   `-- recursao.h
|-- src_c/
|   |-- busca_binaria.c
|   |-- busca_seq_ordenada.c
|   `-- recursao.c
|-- test_c/
|   `-- test_algorithms.c
`-- Makefile
Funções Implementadas
1. busca_binaria

Descrição: Esta função resolve o problema de encontrar a primeira versão defeituosa de um produto em uma sequência de versões. O algoritmo de busca binária é utilizado para minimizar o número de chamadas à API 


isBadVersion(int version).

Parâmetros:


int n: o número total de versões disponíveis.


Retorno: Retorna o número da primeira versão defeituosa.

2. conta_especialidades_distintas

Descrição: Esta função conta o número de especialidades únicas presentes em um vetor de inteiros. Para isso, o vetor de entrada é primeiramente ordenado, e então a contagem de elementos distintos é realizada. A função 


busca_seq_ordenada é utilizada internamente para auxiliar na verificação de especialidades já encontradas.

Parâmetros:

int arr[]: o vetor de especialidades a ser analisado.

int n: o tamanho do vetor.


Retorno: Retorna um int com a quantidade de especialidades únicas encontradas.

3. recursao

Descrição: Esta função conta, de forma recursiva, quantas vezes um caractere específico aparece em uma string. A implementação não utiliza laços de repetição (for, while).


Parâmetros:


const char *str: a string a ser analisada.


char alvo: o caractere a ser contado.


Retorno: Retorna um int que representa o número de ocorrências do caractere na string.

Instruções de Uso
Para compilar e executar os testes, utilize o Makefile fornecido no diretório raiz do projeto.

Abra o terminal e navegue até o diretório Atividade_1.

Utilize o comando correspondente à linguagem de sua escolha:

Para compilar e executar os testes em 

C: make test_c.

Para compilar e executar os testes em 

C++: make test_cpp.
