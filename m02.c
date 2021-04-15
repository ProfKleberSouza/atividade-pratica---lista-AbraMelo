void add_lista(Lista *f,Produto dado){

  Celula *nova = new_celula();
  nova->dado = dado;

  f->fim->prox = nova;
  f->fim = nova;
  f->tam++;
}