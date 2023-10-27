/*
For Loop:
for(initialisation;test condition;increment)
{
Body
}
*/
#include<stdio.h>
main(){
	int i,x;
	printf("Enter the value : ");
	scanf("%d",&i);
	for(x=1;x<=i;x++){
		printf("%d\n",x);
	}
}
