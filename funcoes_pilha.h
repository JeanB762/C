int contaNos(pilha s)
{
   struct no *aux = s.topo;
   int c=0;
   if(aux==NULL) return 0;
   do
   {
   	   c++;
   	   aux = aux->prox;
   }
   while(aux!=NULL);
   return c;
}

int somaNos(pilha s)
{
   struct no *aux = s.topo;
   int soma=0;
   if(aux==NULL) return 0;
   do
   {
       soma = soma + aux->dado;   	   
       aux = aux->prox;
   }while(aux!=NULL);
   return soma;
}

int ultimoValor(pilha s)
{
   struct no *aux = s.topo;
   int c=0;
   if(aux==NULL) return 0;
   do
   {
   	   c++;
   	   aux = aux->prox;
   }
   while(aux->prox!=NULL);
   return aux->dado;
}

int penultimoValor(pilha s)
{
   struct no *aux = s.topo;
   int c=0;
   if(aux==NULL) return 0;
   do
   {
   	   c++;
   	   aux = aux->prox;
   }
   while(aux->prox->prox!=NULL);
   return aux->dado;
}

int primeiroValor(pilha s)
{
   struct no *aux = s.topo;
   int c=0;
   if(aux==NULL) return 0;
   else 
   return aux->dado;
}

int segundoValor(pilha s)
{
   struct no *aux = s.topo;
   int c=0;
   if(aux->prox==NULL) return 0;
   else 
   return aux->prox->dado;
}
