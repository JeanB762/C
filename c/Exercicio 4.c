#include<stdio.h>
#include<locale.h>

int main(){
    float n1, n2, p1, p2, total;
    setlocale(LC_ALL,"portuguese");

    printf("Digite a primeira nota:");
    scanf("%f",&n1);
    printf("Digite o peso referente à nota 1:");
    scanf("%f",&p1);
    printf("Digite a segunda nota:");
    scanf("%f",&n2);
    printf("Digite o peso referente à segunda nota");
    scanf("%f",&p2);
    total=((n1*p1)+(n2*p2))/(p1+p2);
    printf("A média é %f\n", total);


}
