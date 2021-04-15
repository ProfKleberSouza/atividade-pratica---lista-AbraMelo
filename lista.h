#ifndef  LISTA_H
#define  LISTA_H
//========================================
#define MAX 10
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct Produto{
  int codigo;
  char descricao[100];
  float valor;
  int quantidade;
}Produto;

void print_produto(Produto x){
  printf("{codigo: %d, descricao: %s, valor: %.02f, quantidade: %d}\n", x.codigo,x.descricao,x.valor,x.quantidade);
}

// DEFINICAO DO TIPO CELULA
typedef struct Celula{
  Produto dado;
  struct Celula *prox;
}Celula;

// DEFINICAO DO TIPO LISTA
typedef struct Lista{
  Celula *inicio;
  Celula *fim;
  int tam;
}Lista;

Celula *new_celula(){
  Celula *tmp = (Celula*) malloc(sizeof(Celula));
  tmp->prox = NULL;
  return tmp;
}
//=============================
void new_lista(Lista *f){

  Celula *nova = new_celula();

  f->inicio = nova;
  f->fim = nova;
  f->tam = 0;
}

void add_lista(Lista *f,Produto dado){

  Celula *nova = new_celula();
  nova->dado = dado;

  f->fim->prox = nova;
  f->fim = nova;
  f->tam++;
}

void print_lista(Lista *f){

  Celula *tmp = f->inicio->prox;

  while(tmp != NULL){
    print_produto(tmp->dado);
    tmp = tmp->prox;
  }
}

#endif