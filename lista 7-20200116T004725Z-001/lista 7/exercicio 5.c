#include<stdio.h>

main(){
int cont=0, i, j, aux;
char s[100];
printf("Entre com a string:\n");
gets(s);
printf("Entre com os valores: \n");
scanf("%d %d",&i,&j);
    while(s[cont]!='\0'){
        if(i>j){
        aux=i;
        i=j;
        j=aux;
        }

        if(cont>=i && cont<=j)
            printf("%c",s[cont]);
        cont++;
    }
}
