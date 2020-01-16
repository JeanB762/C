#include <stdio.h>
int main(){
    int n1, n2, n3;

    printf("Digite o primeiro numero: ");
    scanf("%f",&n1);

    printf("Digite o segundo numero: ");
    scanf("%f",&n2);

    printf("Digite o terceiro numero: ");
    scanf("%f",&n3);


    if ((n1==n2)&&(n1==n3)){
        printf("Sao todos iguais\n");
        }
    else if ((n1!=n2)&&(n1!=n3)&&(n2!=n3))
    {printf("Sao todos diferentes\n");

    }
    else
        {printf("Sao dois iguais e um diferente\n");
        }


    return 0;

}

