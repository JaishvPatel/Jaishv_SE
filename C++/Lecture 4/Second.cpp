//Method Overriding
#include<iostream>
using namespace std;
class person{
	public:
		void display(){
			cout<<"This is first method."<<endl;
		}
};
class boy:public person{
	public:
		void display(){
			cout<<"Boy can run."<<endl;
		}
};

int main(){
	boy obj;
	obj.display();
	obj.person::display(); //scope resolution: to stop overriding
	return 0;
}
