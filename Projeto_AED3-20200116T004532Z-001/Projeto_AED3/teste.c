#include <stdio.h>
#include <stdlib.h>

funcao(){

FILE *fp;
char d[50] = "Jean";
int i = 101;
long l = 123023L;

	if ((fp=fopen("dados.dat", "wb+")) == NULL){
		printf("arquivo não pode ser aberto\n");
	exit(1);
	}

	fwrite(&d, sizeof(char), 50, fp);
	fwrite(&i, sizeof(int), 1, fp);
	fwrite(&l, sizeof(long), 1, fp);
	rewind(fp);
	fread(&d, sizeof(char), 50, fp);
	fread(&i, sizeof(int), 1, fp);
	fread(&l, sizeof(long), 1, fp);
	printf("%s %d %ld", d, i, l);

fclose(fp);
}

main(){

	printf("