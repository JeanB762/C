#include<stdio.h>
#include<string.h>
main(){
int a, b, c;
char s1[100], s2[100], s3[100],aux[100];

printf("Entre com a primeira palavra:\n");
gets(s1);
printf("Entre com a segunda palavra:\n");
gets(s2);
printf("Entre com a terceira palavra:\n");
gets(s3);

a=strlen(s1);
b=strlen(s2);
c=strlen(s3);
if(a>b){
    strcpy(aux,s1);
    strcpy(s1,s2);
    strcpy(s2,aux);

}
if(b>c){
    strcpy(aux,s2);
    strcpy(s2,s3);
    strcpy(s3,aux);

}
if(a>b){
    strcpy(aux,s1);
    strcpy(s1,s2);
    strcpy(s2,aux);


}

    printf("%s %s %s\n",s1,s2,s3);
}
