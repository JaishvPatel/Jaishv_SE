#include<iostream>
using namespace std;
class person{//class declarartion
	public: //private, procted, public;
	//Member Function
	void age(){
		cout<<"This is my member function.";
	}
};
main(){
	person obj;// class name object name;
	//creating an object for person class
	obj.age();//calling my member function with help of object
}
