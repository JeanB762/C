#include<stdio.h>
int main(){
    int *p,a=0,b=0,c=42,d=0;
    float e,f,g,h;
    char v[11];
    int x;
    p=&a;
    for(x=0;x<10;x++){
        printf("%d ",*p);
        if(p==&h||p==&c||p==&d)
            printf("BAZINGA!  Este r o endereço de uma variavel.\n");
        p--;
    putchar('\n');
    }
    return 0;
}
