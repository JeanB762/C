#include<stdio.h>

main(){
int i=0, espaco=0;
char frases[25];
printf("Entre com a string:\n");
gets(frases);
while(frases[i]!='\0'){
    if(frases[i]!=' ')
    printf("%c",frases[i]);
    else
        espaco++;
    i++;
}
printf("\n\nQuantidade de espacos:\n");
printf("%d",espaco);


}
