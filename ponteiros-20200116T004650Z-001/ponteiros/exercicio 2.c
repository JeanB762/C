#include<stdio.h>
#include<string.h>




int fun(char *a, char *b, int n){
	int i=0, count=0;
	while(a[i]!=' '&&i!=n-1){
		i++;
		if(a[i]==' '||i!=n){
		count=0;		
		while(a[count]!=' '&&count!=n){
		b[count]=a[count];
		count++;
		}
		b[count]='\0';
		break;
		}
	}
	return count;
}
int main(){
	char c1[50], c2[50];
	int i, n, ret;
	gets(c1);
	n=strlen(c1);
	ret=fun(c1, c2, n);
	
	printf("%s \n",c2);
	printf("%d \n",ret);
	
	return 0;
}
