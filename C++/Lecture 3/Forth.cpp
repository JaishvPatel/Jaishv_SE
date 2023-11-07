// This is hierarchical inheritance.
#include<iostream>
using namespace std;
class father{
	public:
		void display(){
			cout<<"This is my father's class."<<endl;
		}
};
class son1:public father{
	public:
		void display2(){
			cout<<"This is son1 class."<<endl;
		}
};
class son2:public father{
	public:
		void display3(){
			cout<<"This is son2 class."<<endl;
		}
};
class son3:public father{
	public:
		void display4(){
			cout<<"This is son3 class.";
		}
};
int main(){
	son1 obj;
	son2 obj1;
	son3 obj2;
	obj.display();
	obj.display2();
	obj1.display();
	obj1.display3();
	obj2.display();
	obj2.display4();
	return 0;
}
