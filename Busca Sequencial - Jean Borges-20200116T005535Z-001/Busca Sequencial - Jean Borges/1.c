#include<stdio.h>
#include<string.h>


main(){
	int b, tam, ret;
	char palavra[10], dado[10]; 
	
	gets(palavra);
	
	gets(dado);
	
	tam=strlen(palavra);
	
	ret=busca(palavra, tam, dado);
	
	printf("%d\n", ret);
	}
	
int busca(char palavra[], int tam, char dado[] ){
	int i;
		
		for(i=0;i<tam;i++)
			if(palavra[i]==dado[0])
			return(i+1);
		return (-1);
}
