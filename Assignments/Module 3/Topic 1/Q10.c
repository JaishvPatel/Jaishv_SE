#include<stdio.h>

main(){
	int l,w,h,a;
	printf("Enter the length of the rectangular prism : ");
	scanf("%d",&l);	
	printf("Enter the width of the rectangular prism : ");
	scanf("%d",&w);	
	printf("Enter the height of the rectangular prism : ");
	scanf("%d",&h);
	a=(l*w)+(w*h)+(h*l);
	printf("The area of the rectangular prism is : %d",2*a);
}
