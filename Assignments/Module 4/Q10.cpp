#include<iostream>
using namespace std;

class student{
	public:
		void percentage(int a){
			cout<<"Your percentage is : "<<a<<"%";
		}
};

class teacher{
	public:
		void salary(int b){
			cout<<"Your salary is : "<<b;
		}
};

class person:public student,public teacher{
	public:
		void name(){
			string name;
			cout<<"Enter your name : ";
			cin>>name;
		}
		int age(){
			int age;
			cout<<"Enter your age : ";
			cin>>age;
			return age;
		}
};

main(){
	person obj;
	int c;
	obj.name();
	c=obj.age();
	if(c<19){
		obj.percentage(85);
	}else{
		obj.salary(25000);
	}
}
