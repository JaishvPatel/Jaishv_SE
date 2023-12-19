#include<iostream>
using namespace std;

class rectangle{
	public:
		int length(){
			int l;
			cout<<"Enter the length of the circle : ";
			cin>>l;
			return l;
		}
		int width(){
			int w;
			cout<<"Enter the breadth of the circle : ";
			cin>>w;
			return w;
		}
};

main(){
	rectangle obj;
	int a,b;
	a=obj.length();
	b=obj.width();
	cout<<"The area of the rectangle is : "<<a*b<<endl;
}
