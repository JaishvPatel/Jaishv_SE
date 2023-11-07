// This is multilevel inheritance.
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
			cout<<"This is my father's class."<<endl;
		}
};
class child:public father{
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
