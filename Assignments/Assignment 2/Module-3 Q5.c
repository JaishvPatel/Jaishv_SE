#include<stdio.h>
main(){
	int y;
	printf("Enter the year here : ");
	scanf("%d",&y);
	(y%4!=0)?printf("It is a leap year."):printf("It is not a leap year.");
}
