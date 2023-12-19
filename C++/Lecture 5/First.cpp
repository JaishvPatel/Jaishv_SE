//C++ Program to demonstrate the 
//functioning of a friend class
#include<iostream>
using namespace std;

class GFG{
	private:
		int private_variable;
		
	protected:
		int protected_variable;
		
	public:
		GFG(){
			private_variable=10;
			protected_variable=99;
		}
		
	friend class F;
};

//Here, class F is declared as a 
//friend inside class GFG. Therefor,
//F is a friend of class GFG. Class F
//can access the private members of
//class GFG.
class F{
	public:
		void display(GFG&t){
			cout<<"The value of Private variable = "
			cout<<t.private_variable <<endl;
			cout<<"The value of Protected variable = "
			cout<<t.protected_variable<<endl;
		}
};

//Driver code
int main(){
	GFG g;
	F fri;
	fri.display(g);
	return 0;
}
