#include<iostream>
using namespace std;

class students{
	public:
		void rollno(){
			int rn;
			cout<<"Enter your roll number : ";
			cin>>rn;
		}
};

class test{
	public:
		void Mathsm(int a){
			cout<<"Your marks in Mathematics is : "<<a<<endl;
		}
		void Engm(int b){
			cout<<"Your marks in English is : "<<b<<endl;
		}
};

class result:public test,public students{
	public:
		int totalm(int a,int b){
			int t;
			t=a+b;
			return t;
		}
};

main(){
	result obj;
	int c;
	obj.rollno();
	obj.Mathsm(95);
	obj.Engm(85);
	c=obj.totalm(95,85);
	cout<<"The result of the student is = "<<c<<"/200.";
}
