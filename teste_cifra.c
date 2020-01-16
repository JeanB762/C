#include <stdio.h>
#include <string.h>


main(){
	int a, i=0,j, k, tam;
	char alf[53], vet[100], vet2[100], letra;
	printf("Vetor\n");
	scanf("%[^\n]s",&vet);
	printf("Chave\n");
	scanf("%d",&a);
	
	
	
	for(letra='A';letra<='Z';letra++){
		alf[i]=letra;
		i++;
	}
	for(letra='a';letra<='z';letra++){
			alf[i]=letra;
		i++;
		}
		
	for(k=0;k<=100;k++){
		for(i=0;i<=52;i++){
			for(j=0;j<=52;j++){
				if(vet[i]==alf[j]){
					vet2[i]=alf[j+a];
				}
				else if(vet[i]==' ')
					vet2[i]==' ';
				}
			}
		}
		
	
	tam=strlen(vet2);
	
	for(i=0;i<=tam;i++){
		printf("%c",vet2[i]);
	}
	
	
	
	
}
