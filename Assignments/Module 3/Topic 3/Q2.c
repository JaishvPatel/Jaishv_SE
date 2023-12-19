#include<stdio.h>

main(){
	int i,a[5];
	for(i=0;i<5;i++){
		printf("Enter number %d : ",i+1);
		scanf("%d",&a[i]);
	}
	printf("The numbers are : ");
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
	}
}
