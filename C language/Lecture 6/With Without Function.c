#include<stdio.h>
main(){
	int num,num1;
	printf("Enter ur values : ");
	scanf("%d%d",&num,&num1);
	sum(num,num1);
}
void sum(int num, int num1){
	printf("This is ur sum of 2 numbers : %d",num+num1);
}
