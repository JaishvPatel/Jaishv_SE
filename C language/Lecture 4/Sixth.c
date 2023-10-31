#include<stdio.h>
main(){
	int i,num[5];
	for(i=0;i<5;i++){
		printf("Enter 5 different values : ");
			scanf("%d",&num[i]);
	}
	printf("This is your array:\n");
	for(i=0;i<5;i++){
		printf("%d \t",num[i]);
	}
}
