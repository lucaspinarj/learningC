#include <stdio.h>
#include <stdlib.h>

typedef struct departamento {
    int cod;
    char descricao[30];
} departamento;

struct cargo {
    int cod;
    char cargo[30];
    float salario;
} cargo;

struct funcionario {
    int cod;
    char nome[30];
    struct departamento depto;
    struct cargo cargo;
    struct endereco {
        char rua[30];
        char postal[10];
        char bairro[30];
    } endereco;
    
} funcionario;

struct funcionario Funcionario;

int main(void) {

}
