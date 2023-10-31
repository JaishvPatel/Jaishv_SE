/*
with with
with without
without with
without without
data_type function_name(){
function body
}

main(){
function name();
}
*/
#include<stdio.h>
main(){
	sum();
}
void sum(){
	int num,num1;
	printf("Enter ur values : ");
	scanf("%d%d",&num,&num1);
	printf("This is ur sum of 2 numbers : %d",num+num1);
}
