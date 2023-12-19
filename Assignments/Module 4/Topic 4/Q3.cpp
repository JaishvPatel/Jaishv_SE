#include<iostream>
using namespace std;

class student{
	public:
		void percentage(int per){
			cout<<"Your percentage is : "<<per<<"%";
		}
};

class teacher{
	public:
		void salary(int sal){
			cout<<"Your salary is : "<<sal;
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
