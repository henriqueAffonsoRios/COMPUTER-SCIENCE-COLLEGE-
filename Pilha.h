#define MAX 100

typedef int tipoPilha;
typedef struct {
    tipoPilha topo;
    int itens[MAX];
} Pilha;

void init(Pilha *);        // Inicia a Pilha

int isEmpty(Pilha);      // Verifica se a pilha est� vazia

int isFull(Pilha);       // Verifica se a pilha est� cheia

void push(Pilha *, int);   // Adiciona um item no topo da pilha

int top(Pilha);          // Verifica o item no topo da pilha

int pop(Pilha  *);         // Remove o item no topo da pilha
