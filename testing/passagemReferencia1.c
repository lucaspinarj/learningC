#include <stdio.h>

void troca(int *x, int *y)
{
    int aux;
    if (x != NULL && y != NULL) {
        aux = *x;
        *x = *y;
        *y = aux;
    }
}

int main()
{
    int v1 = 5, v2 = 10;
    printf("antes da troca: v1 = %d e v2 = %d\n", v1, v2);
    troca(&v1, &v2);
    printf("antes da troca: v1 = %d e v2 = %d\n", v1, v2);
}