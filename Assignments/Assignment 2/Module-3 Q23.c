#include<stdio.h>
main(){
	int a=1,i,n;
	printf("Enter the number : ");
	scanf("%d",&n);
	printf("The factorial will be : \n");
	for(i=n;i>1;i--){
		printf("%d * factorial(%d)\n",i,i-1);
	}
	for(i=n;i>0;i--){
		a=a*i;
	}
	printf("So, the factorial of %d is : ",n);
	printf("%d",a);
}
