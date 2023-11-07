#include<stdio.h>
main(){
	int r,l,b;
	float a;
//	Area of circle;
	printf("Enter the radius of the circle : ");
	scanf("%d",&r);
	a=3.14*(r*r);
	printf("The area of the circle is : %f",a);
//	Area of rectangle;
	printf("Enter the length of rectangle : ");
	scanf("%d",&l);
	printf("Enter the breadth of rectangle : ");
	scanf("%d",&b);
	printf("The area of the rectangle : %d",l*b);
}
