#include<stdio.h>

main(){
	int annual_salary;
	float ip,li,remaining_fees;
	printf("Enter your annual salary here : ");
	scanf("%d",&annual_salary);
	ip=0.1*annual_salary;
	printf("The amount of insurance premium which is 10% will be : %.2f",ip);
	li=0.1*annual_salary;
	printf("The amount of insurance premium which is 10% will be : %.2f",li);
	remaining_fees=annual_salary-(ip+li);
	printf("The remaining fees will be : %.2f",remaining_fees);
}
