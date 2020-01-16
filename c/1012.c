#include<stdio.h>
#include<math.h>
int main(){
    double a, b, c, triangulo, circulo, trapezio, quadrado, retangulo;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    triangulo=(a*c)/2;
    circulo=3.14159*pow(c,2);
    trapezio=((a+b)*(c)/2);
    quadrado=b*b;
    retangulo=a*b;
    printf("TRIANGULO: %.3lf\n", triangulo);
    printf("CIRCULO: %.3lf\n", circulo);
    printf("TRAPEZIO: %.3lf\n", trapezio);
    printf("QUADRADO: %.3lf\n", quadrado);
    printf("RETANGULO: %.3lf\n", retangulo);

    return 0;



}
