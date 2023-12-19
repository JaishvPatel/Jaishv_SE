#include<iostream>
using namespace std;

class Cricketer{
	public :
			char cname[20];
			int tot_match;
			void name()
			{
				cout<<"Cricketer Name : ";
				cin>>cname;
				cout<<"Total Matches : ";
				cin>>tot_match;
			}	
};
class Batsman :public Cricketer{
	public:
			int tot_runs;
			int avg_runs;			
			void Calculate()
			{
				name();
				cout<<"Total runs : ";
				cin>>tot_runs;
				avg_runs=tot_runs/tot_match;
				cout<<"\nCricketer : "<<cname;
				cout<<"\nTotal Matches : "<<tot_match;
				cout<<"\nTotal Runs : "<<tot_runs;
				cout<<"\nAverage Run : "<<avg_runs; 
			}
};
main(){
	Batsman B;
	B.Calculate();
}
