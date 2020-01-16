#include <stdio.h>
#include <math.h>
int main(){
    double raio, volume;
    scanf("%lf",&raio);
    volume=(4.0/3)*3.14159*pow(raio,3);
    printf("VOLUME = %.3lf\n", volume);
    return 0;

}
