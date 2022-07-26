#include <string.h>

typedef struct
{
    char nome[200];
    char disciplina[100];
    float nota;
} Aluno;

Aluno aluno_nota[10];

int main()
{

    for (int i = 0; i < 10; i++)
    {
        strcpy(aluno_nota[i].nome, "NULL");
        strcpy(aluno_nota[i].disciplina, " ");
        aluno_nota[i].nota = 0.0;
    }
}
