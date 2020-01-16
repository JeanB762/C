#include <stdio.h>
#include<string.h>

void merge(char vet[], int tam){
	int mid, i;
	
	if(tam>1){
		mid=tam/2;
		merge(vet, mid);
		merge(vet+mid, tam-mid);
		merge(vet, tam);
	}
	
	for(i=0;i<tam;i++)
	printf("%s",vet[i]);
}
main(){
	int tam, i=0;
	char vet[5]; 
	while(scanf("%[^\n]s",&vet[i]),vet[i]!='\0'){
		i++;
	}
		
	tam=strlen(vet);
	merge(vet, tam);
	
}



