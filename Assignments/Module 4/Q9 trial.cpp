#include<iostream>
using namespace std;

class cricketer{
	public:
		int display(){
			int a;
			cout<<"Enter the Number of overs played by the batsman : ";
			cin>>a;
			return a;
		}
};

class batsman:public cricketer{
	public:
		int runs(int a){
			int i,m[a];
			for(i=0;i<a;i++){
				cout<<"Enter the runs scored by the batsman in the over "<<i+1<<" : ";
				cin>>m[i];
			}
			return m[a];
		}
		int totalruns(int a,int m[]){
			int i,b=0;
			for(i=0;i<a;i++){
				b+=m[i];
			}
			return b;
		}
		int avg(int b, int a){
			return b/a;
		}
		int best(int a,int m[]){
			int i,c=m[0];
			for(i=0;i<a;i++){
				if(c>m[i]){
					c=c;
				}else{
					c=m[i];
				}
			}
			return c;
		}
};

int main(){
	int i,d,tr,ar,bp,n[d];
	batsman obj;
	d=obj.display();
	n[d]=obj.runs(d);
//	tr=obj.totalruns(d,n[d]);
//	cout<<"The total runs are : "<<tr<<endl;
//	ar=obj.avg(tr,d);
//	cout<<"The avg runs are : "<<ar<<endl;
//	bp=obj.best(d,n[d]);
//	cout<<"The best performance was : "<<bp<<endl;
	return 0;
}
