#include<stdio.h>

main(){
	int a[10], dado, i, ret;
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&dado);
	
	quicksort(&a, 0, 10);
	
	ret=busca(a, 10, dado);
	
	for(i=0;i<10;i++){
		printf("%d",a[i]);
	}
	
	printf("\n%d\n",ret);
	
}

void quicksort(int *vet, int esq, int dir){
	int i=esq, j=dir, x, y;
	x=vet[(esq+dir)/2];
	do{
		while ((vet[i]<x)&&(i<dir))
			i++;
			while((x<vet[j])&&(j>esq))
				j--;
				if(i<=j){
				y=vet[i]; vet[i]=vet[j]; vet[j]=y;
				i++; j--;
			}
		}while(i<=j);
		if(esq<j)
			quicksort(vet, esq, j);
		if(i<dir)
			quicksort(vet, i, dir);	
	}

int busca(int a[], int tam, int dado){
	int i;
		
		for(i=0;i<tam;i++)
			if(a[i]==dado)
			return(i+1);
		return (-1);
}
