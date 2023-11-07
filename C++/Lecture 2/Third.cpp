//parameterised constructor
#include<iostream>
using namespace std;
class person{
	public:
		person(int num, int num1){
			cout<<"Sum of two numbers is : "<<num+num1<<endl;
		}
		
};
main(){
	person obj(25,45);
}
