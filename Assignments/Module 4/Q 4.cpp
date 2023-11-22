#include<iostream>
using namespace std;

class calculator{
	public:
		void add(int num1, int num2){
			cout<<"The sum of two numbers is : "<<num1+num2;
		}
		void sub(int num1, int num2){
			cout<<"The diffrence of two numbers is : "<<num1-num2;
		}
		void mul(int num1, int num2){
			cout<<"The mulplication of two numbers is : "<<num1*num2;
		}
		void div(int num1, int num2){
			cout<<"The division of two numbers is : "<<num1/num2;
		}
};

int main(){
	calculator obj;
	int i; int num1; int num2;
	cout<<"Enter the first number : ";
	cin>>num1;
	cout<<"Enter the second number : ";
	cin>>num2;
	cout<<"1. Addition"<<endl;
	cout<<"2. Subtraction"<<endl;
	cout<<"3. Multiplication"<<endl;
	cout<<"4. Division"<<endl;
	cout<<"Enter your choice : ";
	cin>>i;
	switch(i){
		case 1 :
			obj.add(num1,num2);
			break;
		case 2 :
			obj.sub(num1,num2);
			break;
		case 3 :
			obj.mul(num1,num2);
			break;
		case 4 :
			obj.div(num1,num2);
			break;
		default:
			cout<<"Invalid Input.";
	}
	return num1,num2;
}
