#include<stdio.h>
main(){
	int a=1,i,n;
	printf("Enter the number whose factorial u want : ");
	scanf("%d",&n);
	for(i=n;i>0;i--){
		a=a*i;
	}
	printf("%d",a);
}
