#include<stdio.h>
main(){
	int a,i,j,k,m[i];
	printf("How many tables u want to print : ");
	scanf("%d",&i);
	printf("Enter your choice : 1 / 2\n");
	scanf("%d",&k);
	if(k==1){
	for(a=0;a<i;a++){
		printf("Which table do you want to print : ");
		scanf("%d",&m[a]);
	}
	for(a=0;a<i;a++){
		printf("\n--------------------------------------------");
	for(j=1;j<=10;j++){
		printf("\n%d x %d = %d",m[a],j,m[a]*j);
	}
	}
	}
	if(k==2){
		for(a=0;a<i;a++){
		printf("\nWhich table do you want to print : ");
		scanf("%d",&m[a]);	
	for(j=1;j<=10;j++){
		printf("\n%d x %d = %d\n",m[a],j,m[a]*j);
	}
	}
	}
}
