#include<iostream>
using namespace std;

class rectangle{
	public:
		int length(){
			int l;
			cout<<"Enter the length of the rectangle : ";
			cin>>l;
			return l;
		}
		int breadth(){
				int b;
				cout<<"Enter the breadth of the rectangle : ";
				cin>>b;
				return b;
			}
};
class a_rec:public rectangle{
	public:
		void area(int l,int b){
			cout<<"The area of the rectangle is : "<<l*b;
		}
};

main(){
	a_rec obj;
	int l,b;
	obj.length();
	obj.breadth();
	obj.area(12,45);
}

