#include<stdio.h>
main(){
	int i,j,a[3][3],b[3][3];
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		printf("Enter ur values here [%d][%d] : ",i,j);
		scanf("%d",&a[i][j]);
	}
	}
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		printf("Enter ur values here [%d][%d] : ",i,j);
		scanf("%d",&b[i][j]);
	}
	}
	printf("This is ur matrix : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("This is ur second matrix : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
}
