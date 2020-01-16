#include<stdio.h>
main(){
int i,x=0;
char s[50], c;

printf("Digite a string:\n");
gets(s);

printf("Digite o caracter:\n");
scanf("%c",&c);
for(i=0;s[i]!='\0';i++){

    if(s[i]==c)
    x=i+1;
}
    if(x>0)
    printf("%d\n",x);
    else
    printf("nao encontrado\n");

}


