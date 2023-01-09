#include "iostream"
//#include <bits/stdc++.h>
using namespace std;

class add{
    public:
    int a,b;
    void ans(){
        cout << " ans is " << (a+b) << endl;
}
};
int main(){
    add obj1;
    obj1.a= 4;
    obj1.b=8;
    obj1.ans();
}
////////////////////////////////////
// C++ program to demonstrate accessing of data members

// class Geeks {
// 	// Access specifier
// public:
// 	// Data Members
// 	string geekname;
// 	// Member Functions()
// 	void printname() { cout << "Geekname is:" 
// 	<< geekname <<endl; }
// };
// int main()
// {
// 	// Declare an object of class geeks
// 	Geeks obj1;
// 	Geeks obj2;
// 	// accessing data member
// 	obj1.geekname = "Abhi";
// 	obj2.geekname = "don";
// 	// accessing member function
// 	obj1.printname();
// 	obj2.printname();
// 	return 0;
// }
///////////////////////////////////

// #include<iostream>
// using namespace std;
// class Base
// {
// int x;
// public:
// virtual void fun()=0;
// int getX(){return x;}
// };
// //ThisclassinheritsfromBaseandimplementsfun()
// class Derived:public Base
// {
// int y;
// public:
// void fun(){cout<<"fun()called";}
// };
// int main(void)
// {
// Derived d;
// d.fun();
// return 0;
// }





