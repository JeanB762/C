#include<stdio.h>

main(){
    int i=0, c=0;
char s1[30], s2[30];
printf("Entre com a primeira string: \n");
gets(s1);
printf("Entre com a segunda string: \n");
gets(s2);

c=strcmp(s1,s2);
if(c==0)
    printf("Sao iguais!\n");
else
    printf("Nao sao iguais!\n");

}
