#include<stdio.h>
main(){
	int a,b,i;
	float c;
	printf("Enter the first number : ");
	scanf("%d",&a);
	printf("Enter the second number : ");
	scanf("%d",&b);
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
	printf("Enter your choice : ");
	scanf("%d",&i);
	switch(i){
		case 1:
			printf("The sum of two numbers is : ",a+b);
			break;
		case 2:
			printf("The difference of two numbers : ");
			if(a>b){
				printf("%d",a-b);
			}else{
				printf("%d",b-a);
			}
			break;
		case 3:
			printf("The multiplication of two numbers is : %d",a*b);
			break;
		case 4:
			if(a>b){
				c=a/b;
			}else{
				c=b/a;
			}
			printf("The division of two numbers will give : %.2f",c);
			break;
		default:
			printf("Invalid Input.");
			break;
	}
}
