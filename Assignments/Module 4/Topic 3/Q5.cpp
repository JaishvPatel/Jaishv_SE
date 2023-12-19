#include<iostream>
using namespace std;

class triangle{
	public:
		int first(){
			int a;
			cout<<"Enter the length of the first side of the triangle : ";
			cin>>a;
			return a;
		}
		int second(){
			int b;
			cout<<"Enter the length of the second side of the triangle : ";
			cin>>b;
			return b;
		}
		int third(){
			int c;
			cout<<"Enter the length of the third side of the triangle : ";
			cin>>c;
			return c;
		}
};

main(){
	triangle obj;
	int s1,s2,s3;
	s1=obj.first();
	s2=obj.second();
	s3=obj.third();
	if(s1==s2 && s2==s3 && s3==s1){
		cout<<"This is an equilateral triangle.";
	}else if(s1==s2 || s2==s3 || s3==s1){
		cout<<"This is an isoceles triangle.";
	}else{
		cout<<"This is a scalene triangle.";
	}
}
