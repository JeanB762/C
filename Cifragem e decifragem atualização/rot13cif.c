#include <stdio.h>

int main(){
	
	FILE *fp, *arq;
	char ch, a;
	
	fp = fopen("cifrado.txt", "w+");
	if(fp == NULL)
			printf("Erro, nao foi possivel criar o arquivo\n");
	
	arq = fopen("antes.txt", "r");
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
			a=ch+13;
				if(a>90){
					while(a>90){
						a-=26;
					}
				fputc(a, fp);
				ch=getc(arq);	
				}
				
				else{
					fputc(ch+13, fp);
					ch=getc(arq);
				}
			}
						
			
			else if(ch>=91 && ch<=96){
				fputc(ch, fp);
				ch=getc(arq);
			}
			 
			
			else if(ch>=97 && ch<=122){
			a=ch+13;
				if(a>122){
					while(a>122){
						a-=26;
					}
				fputc(a, fp);
				ch=getc(arq);
				}
				
				else{
					fputc(ch+13, fp);
					ch=getc(arq);
				}
			}
			

		}
		fclose(arq);
		fclose(fp);
	}	
	return 0;
}
