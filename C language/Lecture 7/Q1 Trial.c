#include<stdio.h>
struct student{
	int srno[5];
	int sub1[5];
	int sub2[5];
	int sub3[5];
	int total[5];
	int per[5];
}s1;
main(){
	int i;
	for(i=0;i<5;i++){
		printf("Enter the srno : ");
		scanf("%d",&s1.srno);
	}
	for(i=0;i<5;i++){
		printf("Enter the marks : ");
		scanf("%d",&s1.sub1);
	}
	for(i=0;i<5;i++){
		printf("Enter the marks : ");
		scanf("%d",&s1.sub2);
	}
	for(i=0;i<5;i++){
		printf("Enter the marks : ");
		scanf("%d",&s1.sub3);
	}
/*	s1.total=s1.sub1+s1.sub2+s1.sub3;
	for(i=0;i<5;i++){
		printf("%d",s1.total);
	}
	s1.per=s1.total/100;
	for(i=0;i<5;i++){
		printf("%d",s1.per);
	}*/
}
