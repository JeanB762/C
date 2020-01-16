#include<stdio.h>
#include<stdlib.h>
int divs(int n,int *max,int *min){
    int i,pr;
    for(i=1;i<=n;i++){
        if(n%i==0)
            pr++;
    }
    if(pr==2)
        return 0;
    i=2;
    while(n%i!=0)
        i++;
    *min=i;
    i=n-1;
    while(n%i!=0)
        i--;
    *max=i;
    return 1;
}
int main(){
    int n,max,min,primo;
    scanf("%d",&n);
    primo=divs(n,&max,&min);
    printf("Primo? %s\n",(primo==0)?"Sim":"Nao");
    if(primo==1){
        printf("Maximo divisor: %d\nMin divisor: %d\n",max,min);
    }
    return 0;
}
