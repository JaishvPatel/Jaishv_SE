#include<iostream>
using namespace std;

class circle{
	public:
		int radius(){
			int r;
			cout<<"Enter the radius of the circle : ";
			cin>>r;
			return r;
		}
};

main(){
	circle obj;
	int a;
	a=obj.radius();
	cout<<"The area of the circle is : "<<3.14*a*a<<endl;
	cout<<"The circumference of the circle is : "<<2*3.14*a;
}
