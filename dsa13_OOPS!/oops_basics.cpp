/* oops means object oriented programmings or real world prog.
It is a way to do programming languague
use : to connect real world things

It contains an objects(entity) and a class(a template)
class : It is a template or blueprint of the objects or 
        a type of data type or don't have physical existance
Object : It is an entity or instance of class, which has its own properties and behaviours

memory : 
classes do not occupy memory space while objects have memory(dynamic memory allocation)
*/

#include "bits/stdc++.h"
#include "class1.cpp" //can make seperate files
using namespace std;

//class created
class books{

    private:
    string st ="hi";
    int n =5;

    public: //below all is now accessible outside the class (by default-> private)
    int a;
    char ch[10];
    
    //setter -> to set the value
    void setst(string s){
        st = s;
    }

    //getter -> to get private data value
    string getst(){
        return st;
    }

};

class hero {

    public:
    string st ="hii";
    //It is a constructor (having no return type and no parameter)
    //once declared , default will auto. deletes
    hero(){
        cout << "constructor" << endl;
    }

    //para cons
    hero(string st){
        //(*this).st = st; 
        //it is a pointer, stores vaule of current objects
        this -> st = st;
    }
};

int main(){

    //outside class
    movies m;
    cout << m.year << endl;


    //empty class obj has 1 byte memory
    //object declared
    books b1;
    // cout << b1.st << endl; // will show an error
    b1.setst("hello");
    cout << b1.getst() << endl;

    //static allocation
    books b2;
    b2.setst("arihant");
    cout << b2.getst() << endl;

    //dynamic allocation
    books *b3 = new books;
    (*b3).setst("science");
    cout << (*b3).getst() << endl;
    //also
    cout << b3->getst() << endl;
    
    
    //whenever object is create , its const. is called.
    hero b,c,d;

    hero h1("hemo");
    cout << h1.st;
    
}