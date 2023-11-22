#include<stdio.h>
main(){
	int i,j,a[3][3],b[3][3];
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		printf("Enter the element a[%d][%d] : ",i,j);
		scanf("%d",&a[i][j]);
	}
	}
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		printf("%d ",a[i][j]);
	}printf("\n");
	}
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		printf("Enter the element b[%d][%d] : ",i,j);
		scanf("%d",&b[i][j]);
	}
	}
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		printf("%d ",b[i][j]);
	}printf("\n");
	}
	printf("The addition of two matrices is : \n");
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		printf("%d ",a[i][j]+b[i][j]);
	}printf("\n");
	}
	printf("The subtraction of two matrices is : \n");
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		printf("%d ",a[i][j]-b[i][j]);
	}printf("\n");
	}
	printf("The multiplication of two matrices is : \n");
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		printf("%d ",a[i][j]*b[i][j]);
	}printf("\n");
	}
}
