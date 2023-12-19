#include<stdio.h>

//With third variable
main(){
	int a,b,c;
	printf("Enter first number,A : ");
	scanf("%d",&a);
	printf("Enter second number,B : ");
	scanf("%d",&b);
	c=a+b;
	a=c-a;
	b=c-a;
	printf("The numbers after swapping will be : A:%d , B:%d",a,b);
}

// Without using third variable
main(){
	int a,b,c;
	printf("Enter first number,A : ");
	scanf("%d",&a);
	printf("Enter second number,B : ");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("The numbers after swapping will be : A:%d , B:%d",a,b);
}
