void print_produto(Produto x){
  printf("{codigo: %d, descricao: %s, valor: %.02f, quantidade: %d}\n", x.codigo,x.descricao,x.valor,x.quantidade);
}
void print_lista(Lista *f){

  Celula *tmp = f->inicio->prox;

  while(tmp != NULL){
    print_produto(tmp->dado);
    tmp = tmp->prox;
  }
}