#include<stdio.h>

main(){
	int i, j, aux, vet[100], vetaux[100], a=0;
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
		printf("%d\n",vet[i]);
		printf("O menor numero e: %d\n", vetaux[0]);
		printf("Ele se repete: %d vezes\n",a);
}
}
