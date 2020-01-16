#include<stdio.h>
#include<math.h>
int main(){
    int a;
    double b, total;
    scanf("%i",&a);
    scanf("%lf",&b);
    total=a/b;
    printf("%.3lf km/l\n",total);
    return 0;
}
