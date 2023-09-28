// Print qua and rem.
#include<stdio.h>
void main(){
	int a,b,qua,rem;
	printf("Enter a : ");
	scanf("%d",&a);
	printf("Enter b : ");
	scanf("%d",&b);
	qua = a/b;
	rem = a%b;
	printf("qua : %d\n",qua);
	printf("rem : %d",rem);
}
