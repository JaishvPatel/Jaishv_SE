#include<stdio.h>
main(){
	int row,col;
	for(row=1;row<=5;row++){
	for(col=5;col>=1;col--){
		if(row==col){
			printf("$");
		}else{
			printf("*");
		}
	}
		printf("\n");
	}
}
