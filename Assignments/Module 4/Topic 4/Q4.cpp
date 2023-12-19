#include<iostream>
using namespace std;

class name{
	public:
		void display(){
			string n;
			cout<<"Enter your name : ";
			cin>>n;
		}
};
class roll_no{
	public:
		void display2(){
			int r;
			cout<<"Enter your roll number : ";
			cin>>r;
		}
};
class student:public name,public roll_no{
	public:
		void display3(int per){
			cout<<"Your final percentage are : "<<per;
		}
};
int main(){
	student obj;
	obj.display();
	obj.display2();
	obj.display3(85);
	return 0;
}
