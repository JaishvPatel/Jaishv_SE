#include<stdio.h>

main(){
	int b,c,se,so,i,a[10];
	for(i=0;i<10;i++){
		printf("Enter number %d : ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++){
		if(a[i]%2==0){
			b++;
			se+=a[i];
		}else{
			c++;
			so+=a[i];
		}
	}
	printf("The total number of even numbers are : %d\n",b);
	printf("The total number of odd numbers are : %d\n",c);
	printf("The sum of even numbers are : %d\n",se);
	printf("The sum of odd numbers are : %d\n",so);
}
