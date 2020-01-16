#include<stdio.h>
#include<stdlib.h>

main(){

	int i, j, aux, *vet,*vetaux, a=0;
   vet=(int*)malloc(100*sizeof(int));
   vetaux=(int*)malloc(100*sizeof(int));
	for(i=0;i<100;i++){
		scanf("%d",&vet[i]);
		vetaux[i]=vet[i];
		}
	for(i=0;i<99;i++)
		for(j=99;j>i;j--){
			if(vetaux[j-1]>vetaux[j]){
				aux=vetaux[j-j];
				vetaux[j-1]=vetaux[j];
				vetaux[j]=aux;
			}
		}
	for(i=0;i<100;i++){
		if(vetaux[0]==vetaux[i])
			a++;
	}
	for(i=0;i<100;i++){
	
		printf("%d ",vet[i]);
	}
		printf("O menor numero e: %d\n", vetaux[0]);
		printf("Ele se repete: %d vezes\n",a);


free(vet);
free(vetaux);
}
