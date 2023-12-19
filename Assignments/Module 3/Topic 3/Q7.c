#include<stdio.h>

main(){
	int a,c=0,d;
	printf("Enter the number : ");
	scanf("%d",&a);
	while(a!=0){
		d=a%10;
		c=c*10+d;
		a/=10;
	}
	printf("%d",c);
}
