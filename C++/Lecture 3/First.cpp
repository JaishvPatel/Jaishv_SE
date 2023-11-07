// This is single level inheritance.
#include<iostream>
using namespace std;
class parent{
	public:
		void display(){
			cout<<"This is my parent class."<<endl;
		}
};
class child:public parent{
	public:
		void display2(){
			cout<<"This is my child class.";
		}
};
int main(){
	child obj;
	obj.display();
	obj.display2();
	return 0;
}
