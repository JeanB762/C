
#include<stdio.h>

//INTERPOLACAO DE NEWTON
int main(){
    int m, i, j;
    printf("Numero de pontos:\n");
    scanf("%d",&m);
    double x[m+1], y[m+1], dely[m+1], valor;
    printf("Entre com todas as abscissas.\n");
    for(i=1; i<=m; i++)
        scanf("%lf",&x[i]);
    printf("Entre com todas as ordenadas.\n");
    for(i=1; i<=m; i++)
        scanf("%lf",&y[i]);
    printf("Entre com o valor a ser interpolado.\n");
    scanf("%lf",&valor);
    for(i=1 ;i<=m; i++)
        dely[i] = y[i];
    for(i=1 ;i<m; i++){
        for(j=m ;j>i; j--)
            dely[j] = (dely[j] - dely[j-1])/(x[j] - x[j-i]);
    }
    double r = dely[m];
    for(i=m-1 ;i>0; i--)
        r = r*(valor-x[i])+dely[i];

    printf("ponto = %lf, valor interpolado = %lf\n\n",valor, r);
    return 0;
}
