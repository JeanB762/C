#include <stdio.h>
#include<string.h>
#include <stdlib.h>
#include<locale.h>

struct cad{
	char nome[50];
	int cod;
}


main(){
system("color 3F");
FILE *logo;
int a, i=0, j, c, cont=0;
char ch;
struct cad pessoa[20];
setlocale(LC_ALL, "Portuguese");

	while(a!=6){

    if((logo=fopen("head.txt","r"))==NULL){
	printf("arquivo não pode ser aberto\n");
	exit(1); }
	ch = getc(logo);
	while(ch != EOF)
	{
	putchar(ch);
	ch = getc(logo);
	}
    fclose(logo);

	printf("\n********************************************************\nBem Vindo!\n");
	printf("O que você deseja fazer?\n");
	printf("1 - Cadastrar\n");
	printf("2 - Consultar\n");
	printf("3 - Editar\n");
	printf("4 - Excluir\n");
	printf("5 - Relatório\n");
	printf("6 - Sair\n********************************************************\n");
	scanf("%d",&a);

	switch ( a ) {
        case 1:
		printf("Nome:\n");
		getchar();
		scanf("%[^\n]s",&pessoa[i].nome);
		getchar();
		printf("Código:\n");
		scanf("%d",&pessoa[i].cod);
		getchar();
		i++;
		cont++;
		system("cls");
            break;
        case 2:
			j=0;
            printf("Digite o Código:\n");
			scanf("%d",&c);
			while(j<cont){
				if(c==pessoa[j].cod){
					printf("%s\n",pessoa[j].nome);
					printf("%d\n",pessoa[j].cod);
				}
				j++;
			}
            break;

       case 3:
		j=0;
            printf("Digite o Código a ser alterado:\n");
			scanf("%d",&c);
			while(j<cont){
				if(c==pessoa[j].cod){
					printf("Nome:\n");
                    getchar();
                    scanf("%[^\n]s",&pessoa[j].nome);
                    getchar();
                    printf("Código:\n");
                    scanf("%d",&pessoa[j].cod);
                    getchar();
                    break;
					}
				j++;
			}
            break;

        case 4:
        j=0;
        i=cont;
            printf("Digite o código a ser excluído:\n");
			scanf("%d",&c);
			while(j<i){
				if(c==pessoa[j].cod){
					for(j=i;j<cont;j++){
                        pessoa[j]=pessoa[j+1];
                        i++;
					}
				}
		system("cls");
            break;

        case 5:
        for(i=0;i<cont;i++){
        	printf("Nome: %s\n",pessoa[i].nome);
        	printf("Código: %d\n",pessoa[i].cod);
		}
        break;
        case 6:
            printf("Obrigado!\nAté logo.\n");
            system("cls");
            break;

        default:
        	printf("Não é uma opção válida!\n Por favor tente novamente.");

    }
}
}
}
