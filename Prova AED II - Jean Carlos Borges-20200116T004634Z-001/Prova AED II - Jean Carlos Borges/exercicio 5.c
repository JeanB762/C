#include<stdio.h>

main(){
	int a[50], aux, i, j, b=0, c;
	
	for(i=0;i<50;i++)
		scanf("%d",&a[i]);
		
	for(i=0;i<49;i++)
		for(j=49;j>i;j--){
			if(a[j-1]>a[j]){
				aux=a[j-1];
				a[j-1]=a[j];
				a[j]=aux;
			}
		}
	
	for(i=50;i>0;i--){
		if(a[i-1]=a[i]){
			c=a[i-1];
			break;
		}
		
	}
	for(i=0;i<50;i++){
		if(c==a[i])
			b++;
	}
	if(b==50)
	printf("Sao todos iguais.\n");
	else {
	printf("O segundo maior numero e: %d\n",c);
	printf("Ele aparece %d vezes\n", b);
	}
	
	c=0;	
}
