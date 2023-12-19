#include<stdio.h>

main(){
	int a,b,i;
	printf("Enter the first number : ");
	scanf("%d",&a);
	printf("Enter the second number : ");
	scanf("%d",&b);
	printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulo\n");
	printf("Enter your choice : ");
	scanf("%d",&i);
	switch(i){
		case 1 :
			printf("The sum of the two numbers : %d",a+b);
			break;
		case 2 :
			printf("The diffrence of the two numbers is  : %d",a-b);
			break;
		case 3 :
			printf("The multiplication of two numbers is : %d",a*b);
			break;
		case 4 :
			printf("The divisio of two numbers give : %d",a/b);
			break;
		case 5 :
			printf("The modulo of two numbers is : %d",a%b);
			break;
		default:
			printf("Invalid Input.");
			break;
	}
}
