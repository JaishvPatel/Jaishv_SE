#include<stdio.h>

main(){
	int b,h;
	float c;
	printf("Enter the length of the base of the triangle : ");
	scanf("%d",&b);
	printf("Enter the height of the triangle : ");
	scanf("%d",&h);
	c=(b*h)/2;
	printf("The area of the triangle is : %.2f",c);
}
