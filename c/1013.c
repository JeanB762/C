#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    int a, b, c, maiorAB, maiorabc;
    scanf("%i",&a);
    scanf("%i",&b);
    scanf("%i",&c);
    maiorAB=(a+b+abs(a-b))/2;
    maiorabc=(maiorAB+c+abs(maiorAB-c))/2;

    printf("%i eh o maior\n",maiorabc);

    return 0;
}
