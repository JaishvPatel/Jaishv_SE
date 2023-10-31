#include<stdio.h>
main(){
	int a,b,i,j=0,m[5];
	for(i=0;i<5;i++){
		printf("Enter the element : ");
		scanf("%d",&m[i]);
	}
	printf("The elements of the array are: \n");
	for(i=0;i<5;i++){
		printf("%d \t",m[i]);
	}
	printf("\nThe sum of the elements of the array are: ");
	for(i=0;i<5;i++){
		j=j+m[i];
	}
	printf("%d \n",j);
	printf("Average of the elements of the array are : %d \n",j/5);
	printf("Maximum element of the array is: ");
	a=m[0];
	for(i=1;i<5;i++){
		if(a<m[i]){
			a=m[i];
		}
	}
	b=m[0];
	printf("%d \n",a);
	printf("Minimum element of the array is: ");
	for(i=1;i<5;i++){
		if(b>m[i]){
			b=m[i];
		}
	}
	printf("%d \n",b);
}
