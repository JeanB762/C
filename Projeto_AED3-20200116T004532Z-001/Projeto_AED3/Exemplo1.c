#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main(){
	FILE *fp;
	char str[80];
		if((fp=fopen("jean.txt", "w"))==NULL) {  
		printf("arquivo n�o pode ser aberto\n");  
		exit(1); 
		}
		else{
			if((fp=fopen("jean.txt", "r+"))==NULL) {  
		printf("arquivo n�o pode ser aberto\n");  
		exit(1); 
		}
		}
	do{
		printf("Entre uma string (CR para sair): \n");
		gets(str);
		strcat(str, "\n");  
		fputs(str, fp);
		} while(*str!='\n');
}
