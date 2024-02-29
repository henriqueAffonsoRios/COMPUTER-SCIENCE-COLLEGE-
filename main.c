#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"

#define M 80
#define TRUE 1
#define FALSE 0

// Protótipos das funções

int match(char, char);
int abre(char);
int fecha(char);
int validaExpr(char *);

int main(){
  char Expr[M];

  printf("Entre com a expressão matemática: \n");
  scanf("%s", Expr);

  if(validaExpr(Expr)){
    printf("A Expressão é valida!");
  } else {
    printf("A Expressão é invalida!");
  }
}

int validaExpr(char *Expr){
  Pilha P;
  int i = 0;

  init(&P);

  while(Expr[i]){
    if(abre(Expr[i])){
      push(&P, Expr[i]);
    } else {
      if(fecha(Expr[i]) && (isEmpty(P) || !match(pop(&P), Expr[i]))){
        return FALSE;
      }
    }
    i++;
  }

  if(!isEmpty(P)){
    return FALSE;
  } else {
    return TRUE;
  }
}

int abre(char op){
  return (op == '(' || op == '[' || op == '{');
}

int fecha(char op){
  return (op == ')' || op == ']' || op == '}');
}

int match(char op1, char op2){
  return ((op1 == '(') && (op2 == ')')) || ((op1 == '[') && (op2 == ']')) || ((op1 == '{') && (op2 == '}'));
}
