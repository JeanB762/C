#include<stdio.h>
#include<locale.h>  //Biblioteca para poder usar acentua��o


int funcao1(int a){	//fun��o que executa a primeira parte do exercicio
	int x, n, total=0;
	
	for(x=1;x<=a;x++){
		n=x+x;
		total+=(x*n)+1;
	}
	return total;
}

void funcao2(int a, int b, int c){	//fun��o que executa a segunda parte do exercicio
	a+=3;
	b+=3;
	c+=3;
	printf("O resultado �: \n");
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	return;
	
}

main(){

setlocale(LC_ALL,"Portuguese");	 //configura��o da biblioteca locale.h para a lingua portuguesa

int n, x, a, b, c, resfun1;

printf("Escolha a op��o desejada!\n\n");
printf("1 - Op��o 1\n\n");	//leitura de qual op��o o usu�rio ir� escolher
printf("2 - Op��o 2\n\n");
printf("0 - Sair\n\n");

while(scanf("%d", &n),n!=0){


	switch (n){		//op��es
		case 1:	// caso seja escolhida a primeira op��o
	    	printf("Digite um n�mero inteiro: \n");	
	    	scanf("%d",&a);
	    	resfun1=funcao1(a);	//chamada da fun��o numero 1
	    	printf("%d\n", resfun1);
		break;
	
		case 2:
	    	printf("Digite tr�s n�meros inteiros: \n");
	    	scanf("%d", &a);
	    	scanf("%d", &b);
	    	scanf("%d", &c);
	    	funcao2(a, b, c);
		break;
	   
		default:
	    	printf("Op��o inv�lida!\n");
	}
	
	printf("Escolha a op��o desejada!\n\n");
	printf("1 - Op��o 1\n\n");	//leitura de qual op��o o usu�rio ir� escolher
	printf("2 - Op��o 2\n\n");
	printf("0 - Sair\n\n");
}
	
}
	

	

