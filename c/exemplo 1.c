#include<stdio.h>


void bubblesort(int vet[30], int tam){
	int i, j;
	int aux[30];
	for(i=0;i<tam-1;i++){
		for(j=0;j>i;j--){
			if(vet[j]<vet[j-1]){
				aux[i]=vet[j];
				vet[j]=vet[j-1];
				vet[j-1]=aux[i];
			}
		}
	}
	for(i=0;i<tam;i++){
	printf("%c",vet[i]);	
	}
}
	
	
int main(){
	
int vet[30];
int i=0, len=0;
scanf("%d",&vet);
bubblesort(vet, len);

}
