#include <stdlib.h>

typedef Elemento;

// definição de um nó para lista encadeada simples
typedef struct {
    int chave;
    Elemento elemento;
    No *prox;
} No;

// definição de um nó para lista duplamente encadeada
typedef struct {
    int chave;
    Elemento elemento;
    No *ant;
    No *prox;
} No2;

No *no_cabeca;

// busca
No *buscar(No *no_cabeca, No **aux, int chave) {
    No *atual = no_cabeca -> prox;
    *aux = no_cabeca;

    while (atual != NULL) {
        if (atual -> chave < chave) {
            *aux = atual;
            atual = atual -> prox;
        } else if (atual -> chave == chave) {
            return atual; // elemento encontrado
        } else {
            return NULL; // elemento não encontrado
        }
    return NULL; // lista vazia
    }
}

// inserção
int inserir(No *no_ant, Elemento novo_elemento, int chave) {
    No *aux, *anterior = no_cabeca;
    No *novo_no = (No *) calloc (1, sizeof (No));

    aux = buscar(no_cabeca, &anterior, chave);

    if ((novo_no == NULL) || (aux != NULL)) {
        return 0; // falha na inserção
    } else {
        novo_no -> elemento = novo_elemento;
        novo_no -> chave = chave;
        novo_no -> prox = anterior -> prox;
        anterior -> prox = novo_no;
        return 1; // inserção bem sucedida
    }
}

// remoção
remover(No *no_cabeca, int chave) {
    No *aux, *anterior = no_cabeca;
    aux = buscar(no_cabeca, &anterior, chave);
    if (aux != NULL) {
        anterior -> prox = aux -> prox;
        free (aux);
        return 1; // remoção bem sucedida
    } else {
        return 0; // falha na remoção
    }

}

int main() {


}