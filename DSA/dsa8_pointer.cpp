#include <bits/stdc++.h>
using namespace std;

void pointerBasic1(){
    int num = 3;      //variable n has value 3 store in memory
    int *p = &num;   // * is a dereference operator and p is a pointer

    cout << "value of num: " << num 
    << "\naddress of num is: " << &num << endl;

    //value of p and *p
    cout << "p: "<< p <<endl;
    cout << "*p: " << *p <<endl;
    // here pointer p is declared and it contains the address of 
    // n variable and also
    // p pointer has its own address, but store address of n
    
    //size of num and p
    cout << "size of num " << sizeof(num)<< endl;
    cout << "size of p " << sizeof(p) << endl;
    
    //another method
    int *ptr = 0;
    ptr = &num;
    cout << ptr << " " << *ptr; 
    
    //increasing
    (*p)++;             //num is 4 ,In pointer value doesn't copy
    cout << "increasing value" << num <<endl;

    //copying the value
    int *q =p;
    cout << p << " " << q <<endl;
    cout << *p << " " << *q <<endl;
    
    int a = (int )&p;  //&p means address of p pointer
    cout <<a <<endl;
    
    //increamenting
    int i =5;
    int *t = &i;
    cout << "before " << *t <<endl;
    *t = *t +1;               //value in increased 
    cout << "after " << *t <<endl;
   
    cout << "before " << t <<endl;
    t = t +1;                // 4 bytes added to the address
    cout << "after " << t <<endl;
}

void pointerBasic2(){
    
 

















}



int main(){
    //pointerBasic1();
    pointerBasic2();


}