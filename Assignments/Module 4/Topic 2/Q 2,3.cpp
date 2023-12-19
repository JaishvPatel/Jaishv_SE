#include<iostream>
using namespace std;

class bank{
	public:
		string Name;
		void values(){
			int AccNo;
			cout<<"Enter your name here : ";
			cin>>Name;
			cout<<"Enter your account number here : ";
			cin>>AccNo;
		}
		int deposit(){
			int d;
			cout<<"Enter the amount you want to deposit in the account : ";
			cin>>d;
			return d;
		}
		int withdraw(){
			int w;
			cout<<"Enter the amount you want to withdraw from the account : ";
			cin>>w;
			return w;
		}
		void display(){
			int Bal=0,d,w;
			cout<<"Name : "<<Name<<endl;
			Bal=d-w;
			cout<<"Balance in your account : "<<Bal<<endl;
		}
};

main(){
	bank obj;
	int i;
	obj.values();
	cout<<"1. Deposit an amount."<<endl;
	cout<<"2. Withdraw an amount."<<endl;
	cout<<"3. Display name and balance"<<endl;
	cout<<"Enter your choice here : ";
	cin>>i;
	switch(i){
		case 1 :
			obj.deposit();
			break;
		case 2 :
			obj.withdraw();
			break;
		case 3 :
			obj.display();
			break;
		default:
			cout<<"Invalid Input.";
			break;
	}
}
