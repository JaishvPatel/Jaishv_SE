#include<iostream>
using namespace std;
class add{
	public:
		add(int num, int num1){
			cout<<"Sum of two numbers is : "<<num+num1<<endl;
		}
		
};
class sub{
	public:
		sub(int num, int num1){
			cout<<"Difference of two numbers is : "<<num-num1<<endl;
		}
		
};
class mul{
	public:
		mul(int num, int num1){
			cout<<"Multiplication of two numbers is : "<<num*num1<<endl;
		}
		
};
class div{
	public:
		div(int num, int num1){
			cout<<"Division of two numbers is : "<<num/num1<<endl;
		}
		
};
main(){
	int num, num1;
	cout<<"Enter the first number : ";
	cin>>num;
	cout<<"Enter the second number : ";
	cin>>num1;
	add obj(num,num1);
	sub obj1(num,num1);
	mul obj2(num,num1);
	div obj3(num,num1);
}
