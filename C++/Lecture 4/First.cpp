//Method Overloading
#include<iostream>
using namespace std;
class person{
	public:
		void display(int num, int num1){
			cout<<"This is first method."<<num+num1<<endl;
		}
		void display(double num, double num1){
			cout<<"This is second method."<<num+num1;
		}
};

int main(){
	person obj;
	obj.display(1,2);
	obj.display(1.2,3.3);
	return 0;
}
