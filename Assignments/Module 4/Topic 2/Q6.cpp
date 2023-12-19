#include<iostream>
using namespace std;

class person{
	string name;
	string country;
	int age;
	private:
		void setname(string name1){
			this->name = name1;
		}
		string getname(){
			return name;
		}
		void setage(int age1){
			this->age = age1;
		}
		int getage(){
			return age;
		}
		void setcountry(string country1){
			this->country = country1;
		}
		string getcountry(){
			return country;
		}
};

main(){
	person obj;
	obj.setname("Jaishv");
	obj.setage(19);
	obj.setcountry("India");
	cout<<obj.getname()<<endl;
	cout<<obj.getage()<<endl;
	cout<<obj.getcountry()<<endl;
}
