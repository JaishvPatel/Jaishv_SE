#include<stdio.h>
main(){
	int num;
	printf("Enter the number :");
	scanf("%d",&num);
	(num > 18)?printf("That u are eligible."):printf("That u are not eligible.");
	//(num>18) && (num>0)?printf("That u are eligible."):printf("That u are not eligible.");
	//(num>18) || (num<0)?printf("That u are eligible."):printf("That u are not eligible.");
}
