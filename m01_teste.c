#include <assert.h>
#include <stdio.h>
#include "lista.h"

int main(void){

  Lista *consumo;
  
  consumo = (Lista*)malloc(sizeof(Lista));

  new_lista(consumo);

  assert(consumo->tam == 0);

  free(consumo);

  return 0;
}