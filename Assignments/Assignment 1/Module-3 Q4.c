#include<stdio.h>
main(){
	int p,r,t;
	float A;
	printf("Enter the principle amount : ");
	scanf("%d",&p);
	printf("Enter the rate of interest : ");
	scanf("%d",&r);
	printf("Enter the time period : ");
	scanf("%d",&t);
	A=p+(p*r*t/100);
	printf("The total amount will be : %.2f",A);
}
