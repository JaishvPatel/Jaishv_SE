#include<stdio.h>
#include<string.h>
main(){
	int i;
	char name[20];
	printf("Enter the string here : ");
	scanf("%s",&name);
//	gets(name);
	printf("%d \n",strlen(name));
	fflush(stdin);
	printf("Enter ur number here : ");
	scanf("%d",&i);
	printf("%d",i);
}
