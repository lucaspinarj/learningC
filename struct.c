#include <stdio.h>
#include <string.h>


int main(void) {

//definindo o struct
struct endereco {
    int codigo;
    char rua[50];
    char numero[5];
    char CEP[9];
    char bairro[30];
};

// inicializando struct
struct endereco minhacasa = {1, "severino", "32", "28887-55", "cogolololo"};

// acessando variável através da notação ponto

printf("codigo: %d\n", minhacasa.codigo);
printf("rua: %s\n", minhacasa.rua);
printf("numero: %s\n", minhacasa.numero);
printf("CEP: %s\n", minhacasa.CEP);
printf("bairro: %s\n", minhacasa.bairro);

printf("\n");

// manipulando structs

minhacasa.codigo = 2;
printf("codigo passou a ser: %d\n", minhacasa.codigo);

// mudar string
strcpy(minhacasa.rua, "oswaldo");
printf("rua passou a ser: %s\n", minhacasa.rua);




}