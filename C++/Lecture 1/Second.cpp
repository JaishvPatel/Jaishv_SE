#include<iostream>
using namespace std;
main(){
	int a,i,j;
	cout<<"Enter the first number : ";
	cin>>i;
	cout<<"Enter the second number : ";
	cin>>j;
	cout<<"1. Addition"<<endl;
	cout<<"2. Subtraction"<<endl;
	cout<<"3. Multiplication"<<endl;
	cout<<"4. Division"<<endl;
	cout<<"5. Modulo"<<endl;
	cout<<"Enter your choice : ";
	cin>>a;
	if(a==1){
		cout<<"The sum is : "<<i+j;
	}else if(a==2){
		cout<<"The difference is : "<<i-j;
	}else if(a==3){
		cout<<"The multiplication is : "<<i*j;
	}else if(a==4){
		cout<<"The division is : "<<i/j;
	}else if(a==5){
		cout<<"The modulo is : "<<i%j;
	}else{
		cout<<"Invalid Choice.";
	}
}
