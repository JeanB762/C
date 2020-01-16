#include <stdio.h>

int main(){
	
	FILE *fp, *arq;
	char ch, a;
	int chave;
	
	printf("Entre com a chave: \n");
		scanf("%d",&chave);
	
	fp = fopen("decifrado.txt", "w+");
	if(fp == NULL)
			printf("Erro, nao foi possivel criar o arquivo\n");
	
	arq = fopen("cifrado.txt", "r");
	if(arq == NULL)
			printf("Erro, nao foi possivel ler o arquivo\n");
	else{
		
			
		ch=getc(arq);
		while(ch != EOF){
		
			
			if(ch>=32 && ch<=64){
				fputc(ch, fp);
				ch=getc(arq);
			}

			
						
			else if(ch>=65 && ch<=90){
			a=ch-chave;
				if(a<65){
					while(a<65){
						a+=26;
					}
				fputc(a, fp);
				ch=getc(arq);
					
				}
				else{
					fputc(ch-chave, fp);
					ch=getc(arq);
				}
			}
						
			
			else if(ch>=91 && ch<=96){
				fputc(ch, fp);
				ch=getc(arq);
			}
			 
			
			else if(ch>=97 && ch<=122){
			a=ch-chave;
				if(a<97){
					while(a<97){
						a+=26;
					}
				fputc(a, fp);
				ch=getc(arq);
					
				}
				else{
					fputc(ch-chave, fp);
					ch=getc(arq);
				}
			}
			

		}
		fclose(arq);
		fclose(fp);
	}	
	return 0;
}
