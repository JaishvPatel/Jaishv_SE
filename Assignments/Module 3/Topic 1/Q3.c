#include<stdio.h>

main(){
	int r;
	float a,b;
	printf("Enter the radius of the circle : ");
	scanf("%d",&r);
	a=3.14*r*r;
	printf("The area of the circle is : %.2f\n",a);
	b=2*3.14*r;
	printf("The circumference of the circle is : %.2f",b);
}
