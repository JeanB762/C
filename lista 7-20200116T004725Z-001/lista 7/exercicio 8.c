#include<stdio.h>

main(){
char nome[100], cidade[100], curso[100];

printf("Digite o nome:\n");
gets(nome);
printf("Digite a cidade;\n");
gets(cidade);
printf("Digite o curso:\n");
gets(curso);

printf("%s, %s, %s\n",nome,cidade,curso);

}
