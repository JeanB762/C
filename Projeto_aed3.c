#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

struct{
	char nome[50];
	int nasc;
} cad;


main(){
int a;

setlocale(LC_ALL, "Portuguese");

	printf("********************************************************\nBem Vindo!\n");
	printf("O que voc� deseja fazer?\n");
	printf("1 - Cadastrar\n");
	printf("2 - Consultar\n");
	printf("3 - Excluir\n");
	printf("4 - Editar\n");
	printf("5 - Relat�rio\n");
	printf("6 - Sair\n********************************************************\n");
	scanf("%d",&a);
	switch ( a ) {
        case 1: 
			printf("1\n");
            break;
        case 2:          
            printf("2\n");
            break;
        case 3:         
            printf("3\n");
            break;
        case 4:        
            printf("4\n");
            break;
        case 5:            
            printf("5\n");
            break;
        case 6:            
            printf("Obrigado!\nAt� logo.\n");
            break;
        default:
        	printf("N�o � uma op��o v�lida!\n Por favor tente novamente.");
    }
	
}

cadastrar(){

FILE *fp;

	if ((fp=fopen("dados.dat", "wb")) == NULL){
		(fp=fopen("dados.dat", "wb+");
	else
		printf("arquivo n�o pode ser aberto\n");
	exit(1);
	}
	
	printf("Nome:\n");
	fputs(const char *str, 50, FILE *fp);
	
fclose(fp);
}*/


































