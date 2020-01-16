#include<stdio.h>


//estrutura básica struct declaração e nomeação

    typedef struct{
        char nome[50];
        double peso;
        double altura;
    }pessoa_inf;

int main(){
    pessoa_inf p1;
    printf("Nome: ");
    scanf("%[^\n]s", p1.nome);
    printf("Peso: ");
    scanf("%lf", &p1.peso);
    printf("Altura: ");
    scanf("%lf", &p1.altura);
    double imc = p1.peso/(p1.altura * p1.altura);
    printf("nome: %s\n", p1.nome);
    printf("peso: %.2lf\n", p1.peso);
    printf("IMC: %.2lf\n", imc);
    if(imc < 17)
        printf("Muito abaixo do peso\n");
    else if(imc >= 17 && imc <= 18.49)
        printf("Abaixo do peso\n");
    else if(imc > 18.49 && imc < 25.00)
        printf("Peso normal\n");
    else if(imc > 25 && imc < 30)
        printf("Acima do peso\n");
    else if(imc >=30 && imc <35)
        printf("Obesidade I\n");
    else if(imc >=35 && imc <40)
        printf("Obesidade II(Severa)\n");
    else if(imc >= 40)
        printf("Obesidade III(Morbida)\n");
    

    return 0;
}