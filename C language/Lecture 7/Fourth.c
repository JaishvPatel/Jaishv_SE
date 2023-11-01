#include<stdio.h>
#include<string.h>
main(){
	char name[20],name1[20];
	printf("Enter your first name : ");
	scanf("%s",&name);
	printf("Enter your second name : ");
	scanf("%s",&name1);
	if(strcmp(name,name1)==0){
		printf("Your strings are same.");
	}else{
		printf("Your strings are different.");
	}
}
