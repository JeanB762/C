#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

struct no{
	int dado;
	struct no *prox;
};

typedef struct{
	struct no *topo;

}pilha;

void criar(pilha *s){
	s->topo=NULL;

}

int push(pilha *s, int d){
	struct no *aux;
	aux=(struct no *)malloc(sizeof(struct no));
	if(aux==NULL) return (FALSE);
	aux->dado=d;
	aux->prox=s->topo;
	s->topo=aux;
	return(TRUE);	
}

int isEmpty(pilha *s){
	if(s->topo==NULL)
		return (TRUE);
	else 
	return (FALSE);
}

int pop(pilha *s, int *d){

	struct no *aux;
	if(s->topo==NULL) return (FALSE);
	aux = s->topo;
	s->topo = (s->topo)->prox;
	*d = aux->dado;
	free(aux);
	return(TRUE);

}

int contaNos(pilha *s){
	struct no *aux=s->topo;
	int c=0;
	if(aux==NULL) return 0;
	do{
		c++;
		aux=aux->prox;
	}while(aux!=NULL);
		return c;
}

int somaNos(pilha *s){
	struct no *aux=s->topo;
	int soma=0;
	if(aux==NULL) return 0;
	do{
		soma=soma+aux->dado;
		aux=aux->prox;
	}while(aux!=NULL);
		return soma;
}

int ultimoValor(pilha *s){
	struct no *aux=s->topo;
	int ult;
	if(aux==NULL) return 0;
	do{
		ult=aux->dado;
		aux=aux->prox;
		
	}while(aux!=NULL);
		return ult;
}

int penultimoValor(pilha *s){
	struct no *aux=s->topo;
	int penult;
	if(aux==NULL) return 0;
	do{
		penult=aux->dado;
		aux=aux->prox;
		
	}while(aux->prox!=NULL);
		return penult;
		
}

int primeiroValor(pilha *s){
	struct no *aux=s->topo;
	int prime;
	
	if(aux==NULL) return 0;
	prime=aux->dado;
	return prime;
}

int segundoValor(pilha *s){
	struct no *aux=s->topo;
	int seg;
	if(aux==NULL) return 0;
	seg=aux->prox->dado;
	return seg;
}


main(){
	int n, c, soma, ult, penult, prime, seg;
	
	pilha p1;
	criar(&p1);
	push(&p1,12);
	push(&p1,13);
	push(&p1,14);
	push(&p1,15);
	push(&p1,16);
	push(&p1,17);
	push(&p1,18);
	push(&p1,19);
	
	c=contaNos(&p1);
	printf("quantidade de nos: %d\n",c);
	
	soma=somaNos(&p1);
	printf("soma dos nos: %d\n", soma);
	
	ult=ultimoValor(&p1);
	printf("ultimo valor: %d\n",ult);
	
	penult=penultimoValor(&p1);
	printf("penultimo valor: %d\n",penult);
	
	prime=primeiroValor(&p1);
	printf("primeiro valor: %d\n",prime);
	
	seg=segundoValor(&p1);
	printf("segundo valor: %d\n",seg);
	
	
	if(!isEmpty(&p1)){
		while(!isEmpty(&p1)){
			pop(&p1, &n);
			printf("Desempilhou %d\n",n);
		}
	}
	 	
}
