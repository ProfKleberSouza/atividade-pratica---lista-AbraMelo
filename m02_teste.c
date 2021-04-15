#include <stdio.h>
#include "lista.h"

int main(void){

  Lista estoque;
  new_lista(&estoque);
  
  for(int i=0;i<2;i++){
    Produto x;
    int num = rand()%100+2;
    sprintf(x.descricao, "P%d", num);
    x.codigo = num;
    x.valor = num;
    x.quantidade = num;
    add_lista(&estoque,x);
  }

  print_lista(&estoque);


  return 0;
}