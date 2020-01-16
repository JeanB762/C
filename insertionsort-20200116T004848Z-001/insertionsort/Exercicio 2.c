#include<stdio.h>
#include<string.h>

typedef struct{
	int cod;
	float preco;
	char descricao[50], tipo[50];
}produto;

void funtipo(char a[50], int tam){
	int i, j, min;
	char aux;
	
	for(i=0;i<tam-1;i++){
		min=i;
		for(j=(i+1);j<tam;j++){
			if(a[j]<a[min])
				min=j;
		}
	}

	if(i!=min){
	aux=a[i];
	a[i]=	a[min];
	a[min]=aux;			
	}

}

main(){
	int i, opcao=0, t=0, tam;
	produto produtos[50];
			printf("1. Cadastrar produtos na lista (array)\n2. Consultar produtos de maneira ordenada por tipo de produto\n3. Consultar produtos de maneira ordenada por código do produto \n4. Remover um produto da lista\n5. Sair \n==============================================================\n");

	while(printf("Opcao:\n"),scanf("%d",&opcao),opcao!=5){
	
	switch(opcao){
		case 1:{
			
			printf("Produto: %d\n",t+1);
			getchar();
			printf("Codigo:\n");
			scanf("%d",&produtos[t].cod);
			getchar();
			printf("Descricao:\n");
			scanf("%50[^\n]s",&produtos[t].descricao);
			getchar();
			printf("Tipo:\n");
			scanf("%50[^\n]s",&produtos[t].tipo);
			getchar();
			printf("Preco:\n");
			scanf("%f",&produtos[t].preco);
			printf("\n\n");
			getchar();
			t++;
			break;
		}
		case 2:{
			tam=strlen(produtos[t].tipo);
			funtipo(produtos[t].tipo, tam);
			break;
		}
			
}

}
	
}



