#include<stdio.h>

main(){
	int i,j=1,n;
	printf("Enter the number whose factorial you want to print : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		j*=i;
	}
	printf("The factorial of %d is : %d",n,j);
}
