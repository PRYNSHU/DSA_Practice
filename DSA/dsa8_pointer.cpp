#include <bits/stdc++.h>
using namespace std;

int main(){
    int num =3; //variable n has 3 memory store 
    cout << "value of num: " << num 
    << "\naddress of num is: " << &num << endl;

    //here pointer p is declared and it contains the address of 
    //n variable and also (p pointer has its own address , but store address of n)
    int *p = &num;   // * is a dereference operator

    cout << "p: "<< p <<endl;
    cout << "*p: " << *p <<endl;
    cout << "size of num " << sizeof(num)<< endl;
    cout << "size of p " << sizeof(p) << endl;
    
    int *ptr = 0;
    cout << ptr;
    
}