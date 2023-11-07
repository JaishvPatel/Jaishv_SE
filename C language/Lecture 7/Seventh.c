	#include<stdio.h>
struct person{
	int age;
	char name[20];
}s1;
main(){
	char name[20]={"Jaishv"};
	s1.age=19;
	strcpy(s1.name,name);
	printf("This is ur name : %s\n",s1.name);
	printf("This is ur age : %d\n",s1.age);
// Method 2:
	struct person s2={25,"Meet"};
	printf("This is ur name : %s\n",s2.name);
	printf("This is ur age : %d",s2.age);	
}
