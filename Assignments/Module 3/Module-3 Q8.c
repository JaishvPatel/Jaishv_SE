#include<stdio.h>
main(){
	int a,b;
	printf("Enter the first number,a : ");
	scanf("%d",&a);
	printf("Enter the second number,b : ");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("The numbers after swapping are : ");
	printf("\na = %d",a);
	printf("\nb = %d",b);
}
