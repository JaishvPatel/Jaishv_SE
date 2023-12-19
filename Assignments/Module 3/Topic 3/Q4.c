#include<stdio.h>

main(){
	int i,j,n;
	printf("Enter the number till you want to print the tables : ");
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		for(j=1;j<=10;j++){
			printf("%d * %d = %d\n",i,j,i*j);
		}
		printf("\n");
	}
}
