#include <bits/stdc++.h>
using namespace std;

void pointerBasic1(){
    int num = 3;      //variable n has value 3 store in its memory
    int *p = &num;   // * is a dereference operator and p is a pointer

    cout << "value of num: " << num 
    << "\naddress of num is: " << &num << endl;

    //value of p and *p
    cout << "p: "<< p <<endl;
    cout << "*p: " << *p <<endl;
    // here pointer p is declared and it contains the address of 
    // n variable and also
    // p pointer has its own address, but it store's address of n
    
    //size of num and p
    cout << "size of num " << sizeof(num)<< endl;
    cout << "size of p " << sizeof(p) << endl;
    
    //another method
    int *ptr = 0;
    ptr = &num;
    cout << ptr << " " << *ptr << endl;

    //copying the value
    int *q =p;
    cout << p << " " << q <<endl;
    cout << *p << " " << *q <<endl;
    
    int a = (int )&p;  //&p means address of p pointer
    cout <<a <<endl;
    
    //increamenting
    //i is 6 ,In pointer value doesn't copy
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
    //array
    int arr[10] ={2,6,5,7,9};

    cout << arr <<" " << &arr << endl;
    cout << arr[0] << " " << &arr[0] << endl;

    //adding
    cout << "old value " << *arr << endl; //*arr means 0th value
    cout << "new value " << *arr +1 << endl;
    
    //arr[i] = i[arr] = *(arr + i) that's interesting
    //*(arr +1) means take one step or add 4bytes
    cout << "abc " << *(arr +1 ) << " " << *arr + 1 << endl;


    int *p = &arr[0];
    cout << sizeof(arr) << " " << sizeof(&p) << endl;
    
    //we can't reassign the address of an array
    int a[10] ={1,6,3};
    int *t = &a[0];
    cout << a <<endl;

    //an Error
    //a = a+1;       
    cout << *t << endl;
    //Here because address is store in something 
    t = t +1;  //it means add +4 byte to it
    cout << "ans " << *t<< endl;
    

    //CHAR ARRAY
    int b[5] = {1,2,3,7,4};
    char c1[5] = {'a' , 'b' , 'c', 'd' , 'e'};
    //show an error ,because char array also has a null value
    //char c2[5] = "abcde";
    char c2[6] = "abcde";
    char c3[6] = {"abcde"};

    //different way to write
    cout << c1 << endl;
    cout << c2 << endl;
    cout << c3 << endl;

    cout << c1[0] << endl;
    cout << c2[0] << endl;
    cout << c3[0] << endl;

    //cout implement char and int array differently
    cout <<"different implementation " << b << " " << c2 << endl;

    char *temp = &c2[0];
    cout << temp << endl;  // print entire array

    // char *t = "abcde";  //wrong method
    // cout << t <<endl;

}

void print(int *p){
    *p = *p +1;
    //p = p+1;
    cout << "inside value " << *p << endl;
    cout << "inside value " << p << endl;
}

//Here function take arr as pointer *arr
int getsum(int arr[] , int n){
    int sum =0;
    //cout << sizeof(arr) << endl;  //size is 4
    for(int i=0;i<n;i++){
        sum = sum+ arr[i];
    }
    return sum;
}

int main(){
    //pointerBasic1();
    //pointerBasic2();

    
    int value = 5;
    int *p = &value;
    cout << "old value " << *p << endl; //value
    cout << "old value " << p << endl;  //address

    print(p);
    cout << "new value " << *p << endl; //value updated
    cout << "new value " << p << endl;  //address not updated
    
    //getsum
    int arr[5] = {1,2,3,4,5};
    cout << "sum is : " << getsum(arr , 3) << endl;

}