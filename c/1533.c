#include<stdio.h>


main(){
int n, i, j, v, a[100], b[100],aux[100];

	while(scanf("%d",&n),n){
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			b[i]=a[i];
		}
		if(a[i]<a[i-1]){
			aux[i]=a[i];
			a[i]=a[i-1];
			a[i-1]=aux[i];
		}
		
		if(a[1]!=b[i])
		v++;
		printf("%d\n\n", v);
	}
	
	
}
	

	

