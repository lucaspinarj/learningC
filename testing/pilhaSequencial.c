typedef int Elemento;

const int i = 10;
const int MAX_PILHA = i;
int topo = i - 1;
int pilha[i];


// empilhar
int push(Elemento elemento) {
    if (topo < (MAX_PILHA - 1)) {
        topo++;
        pilha[topo] = elemento;
        return 1; // elemento adicionado com sucesso
    } else {
        return 0; // elemento não adicionado
    }
}

// desempilhar
Elemento pop() {
    Elemento valor_recuperado;
    if (topo >= 0) {
        valor_recuperado = pilha[topo];
        topo--;
        return valor_recuperado;
    } else {
        return 0; // falha ao eliminar elemento;
    }
}



int main() {

}