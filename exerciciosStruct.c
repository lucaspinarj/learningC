#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    int codigo;
    char nome[200];
    Data data;
    
} Aluno;

int main() {
Aluno aluno;

setlocale(LC_ALL, "portuguese");

aluno.codigo = 0;
strcpy(aluno.nome, "NULL");
aluno.data.dia = 0;
aluno.data.mes = 0;
aluno.data.ano = 0;

printf("\nO código do aluno é: %d", aluno.codigo);
printf("\nO nome do aluno é: %s", aluno.nome);
printf("\nA data de nascimento do aluno é: %d/%d/%d", aluno.data.dia, aluno.data.mes, aluno.data.ano);

printf("\n\n");

printf("Digite o código do aluno: ");
scanf("%d%*c", &aluno.codigo);

printf("Digite o nome do aluno: ");
scanf("%s%*c", aluno.nome);

printf("Digite o dia do nascimento do aluno: ");
scanf("%d%*c", &aluno.data.dia);
printf("Digite o mês do nascimento do aluno: ");
scanf("%d%*c", &aluno.data.mes);
printf("Digite o ano do nascimento do aluno: ");
scanf("%d%*c", &aluno.data.ano);

printf("\nO código do aluno é: %d", aluno.codigo);
printf("\nO nome do aluno é: %s", aluno.nome);
printf("\nA data de nascimento do aluno é: %d/%d/%d", aluno.data.dia, aluno.data.mes, aluno.data.ano);

}