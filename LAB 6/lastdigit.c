// Print last digit.
#include<stdio.h>
void main(){
	int a,lastdigit;
	printf("Enter a : ");
	scanf("%d",&a);
	lastdigit = a%10;
	printf("last digit : %d",lastdigit);
}
