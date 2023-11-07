#include<stdio.h>
struct student{
	int empno;
	char name[20];
	char add[80];
	int age;
}s1;
main(){
	int i,j[5],x[5],y[5],z[5];
	char name[20],add[80];
	for(i=0;i<5;i++){
		printf("Enter the empno : ");
		scanf("%d",&j[i]);
	}
	for(i=0;i<5;i++){
		printf("Enter the name : ");
		scanf("%s",&name);
		strcpy(s1.name,name);
	}
	for(i=0;i<5;i++){
		printf("Enter the address : ");
		scanf("%s",&add);
		strcpy(s1.add,add);
	}
	for(i=0;i<5;i++){
		printf("Enter the age : ");
		scanf("%d",&z[i]);
	}
	for(i=0;i<5;i++){
		s1.empno=j[i];
		s1.age=z[i];
	}
	printf("EmpNo.\tName \tAdd \t\tAge\n");
	printf("%d\t%s\t%s %d",s1.empno,s1.name,s1.add,s1.age);
}
