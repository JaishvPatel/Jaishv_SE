#include<stdio.h>
#include<string.h>
main(){
	char name[20],name1[20];
	printf("Enter your first name : ");
	scanf("%s",&name);
//	printf("Enter your second name : ");
//	scanf("%s",&name1);
//	strcpy(name1,name);
//	printf("This is copied string : %s",name1);
	printf("This is ur reversed string : %s",strrev(name));
}
