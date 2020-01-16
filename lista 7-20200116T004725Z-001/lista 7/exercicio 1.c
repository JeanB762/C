#include<stdio.h>

main(){
int i,x;
char string[10];
printf("Digite a string e o indice:\n");
gets(string);
scanf("%d",&x);
for(i=0;string[i]!='\0';i++){
    if(i==x)
    printf("%c\n",string[i]);
}
}
