#include<stdio.h>
struct student{
	char name[20];
	int srno;
	int sub1;
	int sub2;
	int sub3;
	int total;
	float per;
}s1;
main(){
	int i,j[5],x[5],y[5],z[5];
	char name[20];
	for(i=0;i<1;i++){
		printf("Enter the srno : ");
		scanf("%d",&j[i]);
	}
	for(i=0;i<1;i++){
		printf("Enter the name : ");
		scanf("%s",&name);
		strcpy(s1.name,name);
	}
	for(i=0;i<1;i++){
		printf("Enter the marks : ");
		scanf("%d",&x[i]);
		printf("Enter the marks : ");
		scanf("%d",&y[i]);
		printf("Enter the marks : ");
		scanf("%d",&z[i]);
		s1.srno=j[i];
		s1.sub1=x[i];
		s1.sub2=y[i];
		s1.sub3=z[i];
		s1.total=x[i]+y[i]+z[i];
		s1.per=s1.total/3;
	}
	printf("SrNo\tName\tSub1\tSub2\tSub3\tTotal\tPer\n");
	printf("%d\t%s\t%d\t%d\t%d\t%d\t%.2f",s1.srno,s1.name,s1.sub1,s1.sub2,s1.sub3,s1.total,s1.per);
}
