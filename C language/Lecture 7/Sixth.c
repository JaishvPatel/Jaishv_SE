#include<stdio.h>
#include<string.h>
main(){
	char name[20],name1[20];
	printf("Enter your first name : ");
	scanf("%s",&name);
	printf("Enter your second name : ");
	scanf("%s",&name1);
	printf("This is ur uppercase string : %s\n",strupr(name));
	printf("This is ur lowercase string : %s\n",strlwr(name1));
}
