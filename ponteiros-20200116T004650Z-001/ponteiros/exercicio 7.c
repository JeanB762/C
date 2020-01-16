#include<stdio.h>

main(){
	int x, y;
	scanf("%d %d",&x, &y);
	
	fun(&x, &y);
	
	printf("x = %d \ny = %d\n",x,y);
}


void fun(int *px, int *py){
	int a, b;
	a=*px;
	b=*py;
	
	*px=a+b;
	*py=a-b;
	
}

//os valores deverão ser passados por referência.

