#include<stdio.h>
int main(){
    int n, q100, q50, q20, q10, q5, q2, q1, r100, r50, r20, r10, r5, r2;
    scanf("%i",&n);
    q100=n/100;
    r100=n%100;
    q50=r100/50;
    r50=r100%50;
    q20=r50/20;
    r20=r50%20;
    q10=r20/10;
    r10=r20%10;
    q5=r10/5;
    r5=r10%5;
    q2=r5/2;
    r2=r5%2;



        return 0;

}
