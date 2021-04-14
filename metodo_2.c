void add_lista(Lista *l, Consumo c){
  if(l->n == MAX){
    printf("Erro: Lista cheia!\n\n");
  }else{
    l->contas[l->n] = c; 
    l->n++;  
  }
}