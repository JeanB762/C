#include<stdio.h>

    main(){
    char nome[45];
    double salfix, totvend, comissao,totreceb;
    scanf("%s",&nome);
    scanf("%lf",&salfix);
    scanf("%lf",&totvend);
    comissao=0.15*totvend;
    totreceb=salfix+comissao;
    printf("TOTAL = R$ %.2lf\n",totreceb);
}
