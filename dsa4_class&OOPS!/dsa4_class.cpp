#include "iostream"
#include <bits/stdc++.h>
using namespace std;

// class add{
//     public:
//     int a,b;
//     void ans(){
//         cout << "ans is " << a+b << endl;
//     }
// };

// int main(){

//     add obj1;
//     add obj2;
//     //different objects means data will be completely seperated
//     obj1.a= 4;
//     obj1.b=8;
//     obj1.ans();

//     obj2.a= 1;
//     obj2.ans();

// }

////////////////////////////////////

// class Geeks{ 
// public: 
// 	int id;
// 	//Default Constructor
// 	Geeks(){
// 		cout << "Default Constructor called" << endl; 
// 		id = -1;
// 	}
	
// 	//Parameterized Constructor
//     //IMP: If an para cons is created then there is NO default cons left in the class
// 	Geeks(int x){
// 		cout <<"Parameterized Constructor called "<< endl; 
// 		id = x; 
// 	}
// };

// int main(){
    
// 	// obj1 will call Default Constructor 
// 	Geeks obj1; 
// 	cout <<"Geek id is: "<<obj1.id << endl; 
	
// 	// obj2 will call Parameterized Constructor 
// 	Geeks obj2(21); 
// 	cout <<"Geek id is: " <<obj2.id << endl; 
	
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

////////////////////////////////////////////
// class A {
// public:
// 	A(){ 
// 		cout << "A's Constructor Called " << endl; 
// 	}
// 	void one(){
// 		cout << "class A" << endl;
// 	}
// };

// class B {
// 	A a;
// 	// static A a;

// public:
// 	B(){ 
// 		cout << "B's Constructor Called " << endl; 
// 	}
// 	//AN ERROR
// 	// cout << "class B " << endl;
// };

// int main()
// {	
// 	B b;
// 	return 0;
// }



