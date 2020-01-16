#include<stdio.h>

main(){
	int a, c;
	
	scanf("%d", &a);
	
	c=funcao(a);
	
	printf("%d",c);
}

int funcao(int n){
	if(n==1)
		return 1;
	else 
		return(n+funcao(n-2));
}
