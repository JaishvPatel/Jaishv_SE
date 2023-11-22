#include<stdio.h>
main(){
	int y,d;
	float a;
	printf("Enter the number of years : ");
	scanf("%d",&y);
	printf("The number of days will be : %d\n",y*365);
	printf("--------------------------------------\n");
	printf("Enter the number of days : ");
	scanf("%d",&d);
	a=d/365;
	printf("The number of years will be : %.2f",a);
}
