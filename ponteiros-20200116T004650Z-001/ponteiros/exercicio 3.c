#include<stdio.h>
#include<string.h>
#include<conio.h>




int fun(char *a){
	int i=0;
	while(a[i]!='\0'){
		i++;
		if(a[i]==' '){
			a[i]='\n';
		}
	}
	return 0;
}
int main(){
	char c1[30];
	int i, n, ret;
	i=0;
	while (c1[i]!='\r'){
	c1[i]=getch();
		if(c1[i]=='\r')
			break;
	i++;
	
	}
	c1[i]='\0';
	fun(c1);
	
	printf("%s \n",c1);
	
	return 0;
}
