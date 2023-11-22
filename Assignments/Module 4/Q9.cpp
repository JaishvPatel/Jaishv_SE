#include<iostream>
using namespace std;

class cricketer{
	public:
		int display(){
			int b,i,m[b];
			cout<<"Enter the number of overs played : ";
			cin>>b;
			for(i=0;i<b;i++){
				cout<<"Enter the runs scored in over "<<i+1<<" = ";
				cin>>m[i];
				return b,m[b];
			}
		}
};

class batsman:public cricketer{
	public:
		int a,b,m[b];
		int totalruns(int b, int m[b]){
			int a=0,b,c,i,m[b];
			cout<<"The total runs are : ";
			for(i=0;i<b;i++){
				a+=m[i];
			}
			cout<<a<<endl;
			return a;
		}
		void avg(int a, int b){
			int a,b;
			cout<<"The avg runs are : "<<a/b<<endl;
		}
		void best(int b,int m[b]){
			int c,i;
			c=m[0];
			for(i=0;i<b;i++){
				if(c>m[i]){
					c=c;
				}else{
					c=m[i];
				}
			}
			cout<<"The best performance of the batsman was : ";
			cout<<c;
		}
};

main(){
	batsman obj;
	obj.display();
	obj.totalruns(b,m[b]);
	obj.avg(a,b);
	obj.best(b,m[b]);
}
