#include<stdio.h>

main(){
	int i,a[5],total=0;
	float avg;
	for(i=0;i<5;i++){
		printf("Enter your expense : ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		total+=a[i];
	}
	avg = (total/5);
	printf("The average expense is : %.2f",avg);
}
