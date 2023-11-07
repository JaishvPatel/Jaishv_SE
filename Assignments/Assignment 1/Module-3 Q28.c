#include<stdio.h>
struct employee{
	int empno;
	char empname[20];
	char add[80];
	int age;
}s1;
main(){
	struct employee s2={20,"Jaishv","16, Sagar Bunglows, Ghatlodiya, Ahmedabad",25};
	printf("EmpNo. = %d\n",s2.empno);
	printf("Name = %s\n",s2.empname);
	printf("Address = %s\n",s2.add);
	printf("Age = %d\n",s2.age);
}
