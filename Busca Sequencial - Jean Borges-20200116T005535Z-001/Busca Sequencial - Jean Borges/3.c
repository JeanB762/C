#include<stdio.h>

main(){
	int a[10], dado, i;
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	
	scanf("%d",&dado);
	
	busca(a, 10, dado);
	
}



void busca(int a[], int tam, int dado){
	int i, posicoes[10], j=0;
		
		for(i=0;i<tam;i++){
			if(a[i]==dado){
				j++;
			posicoes[j-1]=i+1;	
			}		
		}
		
		printf("%d\n",j);
		
		for(i=0;i<j;i++){
			printf("%d ",posicoes[i]);
		}
		printf("\n");
		
}
