#include<iostream>
using namespace std;

class students{
	public:
		void rollno(int rn){
			cout<<"Enter your roll number : ";
			cin>>rn;
		}
};

class test{
	public:
		void Mathsm(int a){
			cout<<"Your marks in Mathematics is : "<<a<<endl;
		}
		void Engm(int b){
			cout<<"Your marks in English is : "<<b<<endl;
		}
};

class result{
	public:
		int totalm(int a,int b){
			t=a+b;
			return t;
		}
};
