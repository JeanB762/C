#include <stdio.h>
#include <stdlib.h>





int decomp(int *v, int n, int *p){
	int i, j=0, k=0;
	int num[12]={2,3,5,7,11,23,29,31,37,41,43,53};
	
	while(n){
		if(n%num[k]==0){
		j++;
		n=n/num[k];
		v[i]=num[k];
		i++;
			if(n==1||!n){
				n=0;
			}
		}
		else 
			k++;
	}
	*p=j;
	return (j>10)?1:0;
}


int main(){
	int n,v[1000], x, i, resp;
	scanf("%d", &n);
	resp=decomp(v, n, &x);
	printf("Primos:\n");
    
	for(i=0;i<x;i++)
    printf("%d \n",v[i]);
    putchar('\n');
    printf("Quantidade de fatores: %d\n",x);
    printf("retorno : %d\n",resp);
    return 0;
}
