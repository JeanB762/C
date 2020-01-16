#include<stdio.h>
main(){
int i=0;
char s[20];

gets(s);
while(s[i]!='\0'){
    if(s[i]!='a')
    printf("%c",s[i]);
    i++;
}
}
