#include<stdio.h>
main(){
	char n[20],n1[20];
	printf("Enter the string : ");
	scanf("%s",&n);
	if(n==strrev(n)){
		printf("It is a palindrome.");
	}else{
		printf("It is not a palindrome.");
	}
}
