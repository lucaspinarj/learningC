#include <stdlib.h>

int main(void) {

int a = 5;
int *ptr;
// o ponteiro ptr recebe o valor da variável a
ptr = &a;

// aloca espaço na memória e retorna o primeiro byte alocado, se não for possível alocar retorna NULL
ptr = (int *) malloc (sizeof(int));

// libera espaço na memória apontado pelo ponteiro "ptr"
ptr = malloc(1024);

// aconselhável mudar "ptr" para null depois que liberar
free(ptr);
ptr = NULL;

ptr = malloc(1024);
// redimensiona a área previamente alocada, apontada por "ptr" para o novo tamanho "newsize"
ptr = (int *) realloc (ptr, sizeof(int)); // atribuindo ao ponteiro
// realloc(ptr, sizeof(int));                chamando a função

free(ptr);
ptr = NULL;

// alocação por vetor percorrendo uma quantidade "count" de elementos de tamanho "eltSize"
ptr = (int *) calloc(1, sizeof(int));

}