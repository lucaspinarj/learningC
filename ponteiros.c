#include <stdio.h>

int main(void) {

int v_num = 10;
int *ptr;

ptr = &v_num;

printf("Utilizando ponteiro \n\n");
printf("Conteúdo da variável v_num: %d \n", v_num);
printf("Endereço da variável v_num: %p \n", &v_num);
printf("Conteúdo do ponteiro ptr: %p \n", ptr);


}