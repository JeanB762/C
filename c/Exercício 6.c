#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    int x, y, aux;
    printf("Digite o valor de x:");
    scanf("%d",&x);
    printf("Digite o valor de y:");
    scanf("%d",&y);
    aux=x;
    x=y;
    y=aux;
    printf("O novo valor de x é:%d\n",x);
    printf("O novo valor de y é:%d\n",y);
}

