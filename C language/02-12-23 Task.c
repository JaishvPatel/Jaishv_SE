#include<stdio.h>
#include<string.h>

int bill(){
	while (c=="y"):
		int o,q;
		char c,y,n;
		printf("**********Welcome to our Restaurant**********");
		printf("\n\nMenu :");
		printf("\n1 Idli   2pcs  40 rs");
		printf("\n2 Dosa   1pcs  70 rs");
		printf("\n3 Pizza   m   140 rs");
		printf("\n4 Pasta 1bowl 180 rs");
		printf("\n");
		printf("\nWhat do u want to order?");
		scanf("%d",&o);
		printf("\nEnter the quantity : ");
		scanf("%d",&q);
		printf("\nWant to order anything else?");
		printf("\nPlease enter 'y' to place more order or 'n' to move forward.");
		scanf("%c",&c);
		if(c=="y"){
			return o,q;
			continue;
		}else if(c=="n"){
			return o,q;
			break;
		}else{
			return o,q;
			break;
		}
}

main(){
	int a=1,b=1,c=1,d=1,o,q;
	bill();
	if(o==1){
		a*=q;
	}
	if(o==2){
		b*=q;
	}
	if(o==3){
		c*=q;
	}
	if(o==4){
		d*=q;
	}
	
	printf("Your total bill is : ",a+b+c+d)	
}
