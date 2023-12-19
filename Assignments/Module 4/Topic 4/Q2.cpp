#include<iostream>
using namespace std;
class Rectangle{
    private:
		float length ;
    public:
		float breadth ;
void lb(){
	cout<<"Enter the length of the rectangle : "; 
    cin>>length ;
    cout<<"Enter the breadth of the rectangle : ";            
    cin>>breadth ;
}
float get_l()
{      		
	return length ; 
}
};  
class Rec_1 : public Rectangle   
{      
    private:
        	float area ;
    public:
void Rec_area(){  
	area=get_l( )*breadth ;  
}         
void Display(){
    cout<<"\nLength = " <<get_l( ) ; 
    cout<<"\nBreadth = " <<breadth ;
    cout<<"\nArea of the rectangle = " <<area  ;
}
};

main(){
    Rec_1 obj;
	obj.lb( );
    obj.Rec_area( );
    obj.Display( );
}

