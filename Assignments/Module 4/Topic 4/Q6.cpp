#include <iostream>
using namespace std;

class PPP{
  	private:
    		int pvt = 1;

  	protected:
    		int prot = 2;

  	public:
    		int pub = 3;
    int getPVT() 
	{
      return pvt;
    }
};
class Public : public PPP{
	public:
    	int getProt() 
		{
      		return prot;
    	}
};

main(){
  Public obj;
  cout<<"Private = " <<obj.getPVT()<<endl;
  cout<<"Protected = " <<obj.getProt()<<endl;
  cout<<"Public = " <<obj.pub;
}
