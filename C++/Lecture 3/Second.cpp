// This is multiple inheritance.
#include<iostream>
using namespace std;
class parent{
	public:
		void display(){
			cout<<"This is my parent class."<<endl;
		}
};
class uncle{
	public:
		void display2(){
			cout<<"This is my uncle's class."<<endl;
		}
};
class child:public parent,public uncle{
	public:
		void display3(){
			cout<<"This is my child class.";
		}
};
int main(){
	child obj;
	obj.display();
	obj.display2();
	obj.display3();
	return 0;
}
