//Vitual class
#include<iostream>
using namespace std;
class person{
	public:
		virtual show()=0;
};
class boy:public person{
	public:
		show(){
			int num,num1;
			cout<<"Enter two numbers :";
			cin>>num>>num1;
			cout<<"This is first method "<<num+num1<<endl;
		}
};
class girl:public boy{
	public:
		show(){
			double num,num1;
			cout<<"Enter two numbers :";
			cin>>num>>num1;
			cout<<"This is second method "<<num+num1<<endl;
		}
};

int main(){
//	boy obj;
	girl obj1;
//	obj.show();
	obj1.show();
	return 0;
}
