#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"

void init(Pilha *p){
    p->topo = -1;
};

int isEmpty(Pilha p){
    return (p.topo == -1);
};

int isFull(Pilha p){
    return (p.topo == MAX - 1);
}

void push(Pilha *p, int x){
    if(isFull(*p)){
        printf("A pilha est� cheia!\n");
        exit(1);
    }
    p->itens[++(p->topo)] = x;
}

int top(Pilha p){
    if(isEmpty(p)){
        printf("A pilha est� vazia!\n");
        exit(1);
    }

    return p.itens[p.topo];
}

int pop(Pilha *p){
    if(isEmpty(*p)){
        printf("A pilha est� vazia!\n");
        exit(1);
    }
    return p->itens[p->topo--];
}
