#include<stdio.h>
#include<locale.h>  //Biblioteca para poder usar acentuação


int funcao1(int a){	//função que executa a primeira parte do exercicio
	int x, n, total=0;
	
	for(x=1;x<=a;x++){
		n=x+x;
		total+=(x*n)+1;
	}
	return total;
}

void funcao2(int a, int b, int c){	//função que executa a segunda parte do exercicio
	a+=3;
	b+=3;
	c+=3;
	printf("O resultado é: \n");
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	return;
	
}

main(){

setlocale(LC_ALL,"Portuguese");	 //configuração da biblioteca locale.h para a lingua portuguesa

int n, x, a, b, c, resfun1;

printf("Escolha a opção desejada!\n\n");
printf("1 - Opção 1\n\n");	//leitura de qual opção o usuário irá escolher
printf("2 - Opção 2\n\n");
printf("0 - Sair\n\n");

while(scanf("%d", &n),n!=0){


	switch (n){		//opções
		case 1:	// caso seja escolhida a primeira opção
	    	printf("Digite um número inteiro: \n");	
	    	scanf("%d",&a);
	    	resfun1=funcao1(a);	//chamada da função numero 1
	    	printf("%d\n", resfun1);
		break;
	
		case 2:
	    	printf("Digite três números inteiros: \n");
	    	scanf("%d", &a);
	    	scanf("%d", &b);
	    	scanf("%d", &c);
	    	funcao2(a, b, c);
		break;
	   
		default:
	    	printf("Opção inválida!\n");
	}
	
	printf("Escolha a opção desejada!\n\n");
	printf("1 - Opção 1\n\n");	//leitura de qual opção o usuário irá escolher
	printf("2 - Opção 2\n\n");
	printf("0 - Sair\n\n");
}
	
}
	

	

