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

// ++a -> Pre will show result in the same line
// a++ -> Post will show result in next line

// Solution: function(a++,--a) --> 5*4=20
// Solution: function(a--,++a) --> 5*6=30
