#include<stdio.h>

function(int, int)
main(){
	int a=5,b;
	b=function(function(a++,--a),function(a--,++a));
	printf("%d \t %d",a,b);
}

int function(int a, int b){
	return a*b;
}
