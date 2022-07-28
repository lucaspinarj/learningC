#include <stdlib.h>

const int i = 10;
const int MAX_PILHA = i;

topo = i - 1;

int pilha[i];

typedef Elemento;

typedef struct {
    int chave;
    Elemento elemento;
    No *ant;
    No *prox;
} No;

// empilhar
int push(Elemento elemento) {
    No *novo_no = (No *) calloc (1, sizeof (No));
    if (novo_no != NULL) {
        novo_no -> elemento = elemento;
        novo_no -> prox = topo;
        topo = novo_no;
        return 1; // adicionado com sucesso
    } else {
        return 0; // falha ao adicionar elemento
    }
}

//desempilhar
int pop() {
    No *aux;
    Elemento *elemento_recuperado;
    Elemento *elemento;
    if (topo != NULL) {
        elemento_recuperado -> topo -> elemento;
        aux = topo;
        topo = topo -> prox;
        free(aux);
        return elemento_recuperado;
    } else {
        return NULL; // falha ao remover elemento
    }
}

// APENAS DEMONSTRAÇÃO

int main() {

}