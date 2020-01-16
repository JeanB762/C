#include<stdio.h>

#define MAX 50

typedef int TIPOCHAVE;

//Modelando a Estrutura
typedef struct{
    TIPOCHAVE chave;
    int nroElm;
}REGISTRO;

//Criando a Estrutura
typedef struct{
    REGISTRO A[MAX];
}LISTA;

//inicialização da estrutura
void iniciar_lista(LISTA* l){
    l->nroElm = 0;
};

//exibição da estrutura
void exibirLista(LISTA* l){
    int i;
    printf("Lista: \" ");
    for(i=0;i<l->nroElm; i++){
        printf("%i ", l->A[i].chave);
    }
    printf("\"\n");

};

//busca de item
int buscaSequencial(LISTA* l, TIPOCHAVE ch){
    int i=0;
    while (i < l->nroElm){
        if(ch == l->A[i].chave) return i;
        else i++;
    }    
    return -1;
}


int main(){



return 0;
}

