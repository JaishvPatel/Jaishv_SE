#include<iostream>
using namespace std;
class person{
	string book,a_name,pub;
	int price,pages;
	public:
		void setBook(string book1){
			this->book = book1;
		}
		string getBook(){
			return book;
		}
		void setA_name(string a_name1){
			this->a_name = a_name1;
		}
		string getA_name(){
			return a_name;
		}
		void setPrice(int price1){
			this->price = price1;
		}
		int getPrice(){
			return price;
		}
		void setPages(int pages1){
			this->pages = pages1;
		}
		int getPages(){
			return pages;
		}
		void setPublication(string publ1){
			this->pub = publ1;
		}
		string getPublication(){
			return pub;
		}
};

main(){
	person obj;
	obj.setBook("The Wings of Fire");
	obj.setA_name("A.P.J. Abdul Kalam");
	obj.setPrice(999);
	obj.setPages(500);
	obj.setPublication("Jaishv Publications");
	cout<<obj.getBook()<<endl;
	cout<<obj.getA_name()<<endl;
	cout<<obj.getPrice()<<endl;
	cout<<obj.getPages()<<endl;
	cout<<obj.getPublication();
}
