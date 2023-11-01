#include<stdio.h>
#include<string.h>
main(){
	char name[20],name1[20];
	printf("Enter your first name : ");
//	scanf("%s",&name);
	gets(name);
	printf("Enter your second name : ");
//	scanf("%s",&name1);
	gets(name1);
	printf("%s",strcat(name,name1));
}
