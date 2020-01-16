#include<stdio.h>
#define tam 10

main(){
	int a[10], i, j, eleito, max=0, maxquant=0, min=0, minquant=0;
	
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
		
	
	for(i=1;i<tam;i++){
		eleito=a[i];
		j=i-1;
		while((j>=0) && (eleito <a[j])){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=eleito;
	}
		
	for(i=0;i<10;i++){
	if(a[i]>max)
		max=a[i];
	}
	min=a[9];
	
	for(i=0;i<10;i++){
	if(a[i]<min)
		min=a[i];
		}
		
	for(i=0;i<10;i++){		
		if(min==a[i]){
			minquant++;
		}
		if(max==a[i]){
			maxquant++;
		}
	}
	if(minquant==10 && maxquant==10)
		printf("Sao todos iguais\n");
	else{	
		printf("O maior numero e %d, e ele aparece %d vezes\n", max, maxquant);
		printf("O menor numero e %d, e ele aparece %d vezes\n", min, minquant);	
	}
}

