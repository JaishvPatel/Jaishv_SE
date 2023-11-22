#include<iostream>
using namespace std;

class person{
	public:
		void name(){
			string name;
			cout<<"Enter your name : ";
			cin>>name;
		}
		void age(){
			int age;
			cout<<"Enter your age : ";
			cin>>age;
		}
};

class student{
	public:
		void percentage(int a){
			cout<<"Your student's percentage is : "<<a<<"%";
		}
};

class teacher:public person,public student{
	public:
		void salary(int b){
			cout<<"Your salary is : "<<b;
		}
};

main(){
	teacher obj;
	obj.name();
	obj.age();
	obj.salary(25000);
	obj.percentage(85);
}
