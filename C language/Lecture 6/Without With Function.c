#include<stdio.h>
main(){
	int ans;
	ans=sum();
	printf(ans);
}
void sum(){
	int num,num1;
	printf("Enter ur values : ");
	scanf("%d%d",&num,&num1);
	printf("This is ur sum of 2 numbers : %d",num+num1);
	return num+num1;
}
