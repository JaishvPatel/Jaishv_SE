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
			cout<<"Boy can run."<<endl;
		}
};

int main(){
	boy obj;
	obj.show();
	return 0;
}
