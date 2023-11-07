#include<stdio.h>
main(){
	int a,i,m[5];
	for(i=0;i<5;i++){
		printf("Enter the element : ");
		scanf("%d",&m[i]);
	}
	printf("The elements of the array are: \n");
	for(i=0;i<5;i++){
		printf("%d \t",m[i]);
	}
	printf("Maximum element of the array is: ");
    a=m[0];
	for(i=1;i<5;i++){
		if(a<m[i]){
			a=m[i];
		}
	}
}
