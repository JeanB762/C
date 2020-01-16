#include<stdio.h>

main(){
	int a, b, c;
	
	scanf("%d %d %d", &a, &b, &c);
	calcula(&a, &b, &c);
	printf("%d\n%d\n%d\n", a, b, c);
}

void calcula(int *a, int *b, int *c){
	int x, y, z;
	x=*a;
	y=*b;
	z=*c;
	
	*a=x*y*z;
	
	if(x>y&&x>z)
		*b=x;
	else if(y>x&&y>z)
		*b=y;
	else if(z>x&&z>y)
		*b=z;
	
	*c=x+y+z;
}
	

