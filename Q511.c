#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int f[MAX];
int s = 0;
int t = -1;

//função para inserir um elemento y na fila.
void inserir(int y) {
    if (t < MAX - 1) {
        t++;
        f[t] = y;
        printf("Elemento %d inserido na fila.\n", y);
    } else {
        printf("Erro: Fila cheia.\n");
    }
}

int remover() {
    if (s <= t) {
        int elemento = f[s];
        s++;
        printf("Elemento %d removido da fila.\n", elemento);
        return elemento;
    } else {
        printf("Erro: Fila vazia.\n");
        return -1;
    }
}

//função para remover um elemento da fila.
int main() {
    inserir(5);
    inserir(10);
    remover();
    remover();
    remover();

    return 0;
}