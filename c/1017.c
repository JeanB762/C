#include<stdio.h>
int main(){
    int tempo, velocidade;
    float distancia, litros;
    scanf("%i",&tempo);
    scanf("%i",&velocidade);
    distancia=tempo*velocidade;
    litros=distancia/12;
    printf("%.3f\n",litros);
        return 0;

}
