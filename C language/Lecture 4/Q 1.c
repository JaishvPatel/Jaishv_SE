#include<stdio.h>
main(){
	int a,b,c,n,i,j;
	i=0;
	j=0;
	for(a=1;a<=10;a++){
		printf("Enter the number : ");
		scanf("%d",&n);
		if(n%2==0){
			i+=1;
			b=b+n;
		}else{
			j+=1;
			c=c+n;
		}
	}
	printf("The total number of even numbers are : ");
	printf("%d \n",i);
	printf("The total number of odd numbers are : ");
	printf("%d \n",j);
	printf("The sum number of even numbers are : ");
	printf("%d \n",b);
	printf("The sum number of odd numbers are : ");
	printf("%d \n",c);
}
