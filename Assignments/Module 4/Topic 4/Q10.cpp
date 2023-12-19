#include<iostream>
#include<string.h>
using namespace std;

class AddString {
	public:
	    char s1[25], s2[25];
	    // Parameterized Constructor
	    AddString(char str1[], char str2[]){
	        strcpy(this->s1, str1);
	        strcpy(this->s2, str2);
	    }
	
	    // Overload Operator+ to concat the string
	    void operator+(){
	        cout<<"\n\n\t Concatenation: "<<strcat(s1, s2);
	    }
};

main(){
    // Declaring two strings
    char str1[]="Jaishv";
    char str2[]="Patel";
    // Declaring and initializing the class
    // with above two strings
    AddString a1(str1, str2);
    // Call operator function
    +a1;
}
