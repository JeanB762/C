#include<stdio.h>
#include<string.h>

void ord(char v[][1000], int n){
	int i, j;
	char aux[1000];
	
	
	for(i=0;i<n-1;i++)
		for(j=n-1;j>i;j--){
			if(strcmp(v[j],v[j-1])>0){
				strcpy(aux,v[j]);
				strcpy(v[j],v[j-1]);
				strcpy(v[j-1],aux);
			}
			}
		}
	
		
	




main(){
	
	int n, i, j;
	char v[1000][1000];
	
	scanf("%d",&n);
	
	while(scanf("%d",&n) != EOF){
	
	for(i=0;i<n;i++)
		scanf("%s",v[i]);
		
	ord(v, n);
	
	for(i=0;i<n;i++){
	printf("%s\n",v[i+1]);
	}
}
}

