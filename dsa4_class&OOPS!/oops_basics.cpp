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
#include "outside_class1.cpp" //can make seperate files
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
        this -> st = s;
    }

    //getter -> to get private data value
    string getst(){
        return st;
    }

};

class hero {

    public:
    string st ="hii";
    int n = 22;
    static int timing ;

    //It is a constructor (having no return type and no parameter)
    //once declared , default will auto. deletes
    hero(){
        cout << "constructor called" << endl;
    }

    //para cons
    hero(string st){

        //it is a pointer, stores vaule of (current) object
        //stores address of current obj;
        //(*this).st = st;
        this -> st = st;
        cout << "st-> "  << st << endl;
    }

    //copy constuctor
    hero(hero& temp){
        cout << "copy cons " << endl;
        this -> st = temp.st;
    }

    //setter
    void setst(string st){
        this -> st = st;
    }
    void setn(int n){
        this -> n = n;
    }
    void print(){
        cout << st << " " << n << endl;
    }

    //destructor -> memory deallocation
    ~hero(){
        cout << "destructor called"  << endl;
    }

};

//static -> belong to class ,not obj and initialize outside the class
int hero :: timing = 10;

int main(){
    /*
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
    */
    
    //whenever object is create , its const. is called.
    /*
    hero b,c,d;

    hero h1("hemo");
    cout << h1.st << endl;

    //copy constructor
    // hero h2(h1);
    // cout << h2.st;

    hero h3(h1);
    h1.setst("ram");
    h1.setn(100);
    h1.print();
    hero h4;
    h4 = h1; //copy assignment operator
    h1.print();
    h4.print();
    */

    //static 
    hero R; //auto des. called

    //dynamic
    hero *h = new hero();
    //manually des. called
    delete h;

    cout << hero:: timing << endl; //called directly
    cout << R.timing << endl;
    return 0;
}