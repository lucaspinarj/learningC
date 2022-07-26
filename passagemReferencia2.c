#include <stdio.h>

void v_iniciacao(int *vet, int n) {
    int i;
    for (i=0; i < n; i++) {
        vet[i] = 0;
    }
}

void v_imprime(int *vet, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d - ", vet[i]);
        printf("\n");
    }
}

int main() {
    int vet[10], i;
    v_iniciacao(vet, 10);

    // impressao apos inicializacao
    printf("impressao do vetor antes da atribuicao");
    v_imprime(vet, 10);

    // mudando valores de vet
    for (i = 0; i < 10; i++) {
        vet[i] = i;
    }
    // impressao apos atribuicao
    printf("impressao do vetor apos a atribuicao");
    v_imprime(vet, 10);
}