#include<stdio.h>

main(){
	int a,b,c;
	printf("Enter the length of the rectangle : ");
	scanf("%d",&a);
	printf("Enter the breadth of the rectangle : ");
	scanf("%d",&b);
	c=2*(a+b);
	printf("The circumference of the rectangle is : %d",c);
}
