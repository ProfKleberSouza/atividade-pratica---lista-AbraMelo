void criar_lista(Lista *l){
  l->contas = (Consumo*)malloc(MAX * sizeof(Consumo));
  l->n = 0;
}