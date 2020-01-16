#include<stdio.h>
int main(){
    float n, h, vh, sal;
    scanf("%f",&n);
    scanf("%f",&h);
    scanf("%f",&vh);
    sal=h*vh;
    printf("NUMBER = %.0f\n", n);
    printf("SALARY = U$ %.2f\n", sal);
    return 0;
}
