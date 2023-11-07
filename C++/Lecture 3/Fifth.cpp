// This is hybrid inheritance.
#include<iostream>
using namespace std;
class grandfather{
	public:
		void display(){
			cout<<"This is my grandfather's class."<<endl;
		}
};
class father:public grandfather{
	public:
		void display2(){
			cout<<"This is father's class."<<endl;
		}
};
class middle{
	public:
		void display3(){
			cout<<"This is middle class."<<endl;
		}
};
class child:public father,public middle{
	public:
		void display4(){
			cout<<"This is child class.";
		}
};
int main(){
	child obj;
	obj.display();
	obj.display2();
	obj.display3();
	obj.display4();
	return 0;
}
