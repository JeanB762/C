#include<stdio.h>
#include<string.h>
typedef struct{
    char nome[50];
    float nota1, nota2;
}alunos;
void InsertionSort(alunos *alu){
        int i, j;
        alunos ajuda;
        for (i = 1; i<8; i++){
            ajuda=alu[i];
            j = i-1;
            while (j>=0 && strcmp(ajuda.nome,alu[j].nome)<0){
                alu[j+1]=alu[j];
                j--;
            }
            alu[j+1]=ajuda;
        }
    }
void ssort(alunos *a){
    int i, j, min;
    alunos ajuda;
    for (i = 0; i < 7; i++){
        min = i;
        for (j = i+1; j < 8; j++){
            if(a[j].nota1 < a[min].nota1){
                min = j;
            }
        }
        if (i != min){
            ajuda = a[i];
            a[i] = a[min];
            a[min] = ajuda;
        }
    }
}
int main(){
    int i, j;
    alunos alu[8];
    for(i=0 ; i<8 ; i++){
        scanf("%s",alu[i].nome);
        getchar();
        scanf("%f%f",&alu[i].nota1,&alu[i].nota2);
        getchar();
    }
    InsertionSort(alu);
    printf("Odernacao por insertionsort:\n\n");
    for(i=0;i<8;i++){
        printf("Nome: %s\n",alu[i].nome);
        printf("Nota 1: %.2f\nNota 2: %.2f\n",alu[i].nota1,alu[i].nota2);
        putchar('\n');
    }
    ssort(alu);
    printf("Odernacao por seletionsort:\n\n");
    for(i=0;i<8;i++){
        printf("Nome: %s\n",alu[i].nome);
        printf("Nota 1: %.2f\nNota 2: %.2f\n",alu[i].nota1,alu[i].nota2);
        putchar('\n');
    }
    printf("Alunos com media maior que 7:\n\n");
    for(i=0;i<8;i++){
        if(((alu[i].nota1+alu[i].nota2)/2)>7){
            printf("Nome: %s\n",alu[i].nome);
            printf("Nota 1: %.2f\nNota 2: %.2f\n",alu[i].nota1,alu[i].nota2);
            putchar('\n');
        }
    }
    return 0;
}
