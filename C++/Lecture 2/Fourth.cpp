//Parameterised Constructor & Destructor
#include<iostream>
using namespace std;
class person{
	public:
		person(int num, int num1){
			cout<<"Sum of two numbers is : "<<num+num1<<endl;
		}
		~person(){
			cout<<"This is ur destructor."<<endl;
		}
		
};
main(){
	person obj(25,45);
	person obj1(25,25);
}
