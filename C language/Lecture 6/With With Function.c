#include<stdio.h>
main(){
	int ans,num,num1;
	printf("Enter ur values : ");
	scanf("%d%d",&num,&num1);
	ans=sum(num,num1);
	printf("This is ur sum of 2 numbers : %d",ans);
}
void sum(int num, int num1){
	return num+num1;
}
