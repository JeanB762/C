#include<stdio.h>

main(){
	long long int som, prod, a, b; 
	int ret;
	scanf("%lld %lld",&a,&b);
	
	ret=fun(a, b, &som, &prod);
	
	printf("soma %lld\n",som);
	printf("produto %lld\n", prod);
	printf("return %d\n", ret);
}


int fun(long long int a, long long int b, long long int *s, long long int *p){
	
	*s=a+b;
	*p=a*b;
	
	if(*s>2147483647||*p>2147483647)
		return -1;
	else if(a==b)
		return 1;
	else if(a!=b)
		return 0;
	
}
