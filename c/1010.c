#include <stdio.h>
int main(){
    int cod1, cod2, quant1, quant2;
    double valunit1, valunit2, totpagar, valtot1, valtot2;

    scanf("%i",&cod1);

    scanf("%i",&quant1);

    scanf("%lf",&valunit1);

    scanf("%i",&cod2);

    scanf("%i",&quant2);

    scanf("%lf",&valunit2);

    valtot1=valunit1*quant1;
    valtot2=valunit2*quant2;
    totpagar=valtot1+valtot2;
    printf("VALOR A PAGAR: R$ %.2lf\n",totpagar);
    return 0;

}
