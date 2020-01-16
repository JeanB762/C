#include<stdio.h>


main(){
	
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	fun(&a, &b, &c);
	printf("%d %d %d\n", a, b, c);
}

void fun(int *pa, int *pb, int *pc){
	int i, aux;
	
	if(*pa>*pb){
		aux=*pa;
		*pa=*pb;
		*pb=aux;
		aux=0;
	}
	if(*pa>*pc){
		aux=*pa;
		*pa=*pc;
		*pc=aux;
		aux=0;
	}
	if(*pb>*pc){
		aux=*pb;
		*pb=*pc;
		*pc=aux;
		aux=0;
	}
	
	}
	

