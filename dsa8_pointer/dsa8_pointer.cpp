#include <bits/stdc++.h>
using namespace std;

void pointerBasic1(){
    int num = 4;      //variable n has value 4 store in its memory
    int *p = &num;   // * is a dereference operator and p is a pointer

    cout << "value of num: " << num
    << "\naddress of num is: " << &num << endl;

    //value of p and *p
    cout << "p: "<< p <<endl;
    cout << "*p: " << *p <<endl;
    // here pointer p is declared and it contains the address of 
    // num variable and also
    // p pointer has its own address, but it store's address of num
    
    //size of num and p
    cout << "size of num " << sizeof(num)<< endl;
    cout << "size of p " << sizeof(p) << endl;
    
    //another method
    cout << endl << "another method" << endl;
    int *ptr = 0; //pointer declared with null value
    ptr = &num;
    cout << ptr << " " << *ptr << endl;

    //copying the value 
    cout << "value copy: ";
    int *q =p; // both pointer pointing to same address
    cout << p << " " << q << endl;
    cout << *p << " " << *q << endl;
    
    int a = (int)&p;  //&p means address of p pointer
    cout << a << " " << &p << endl;
    
    //Increamenting
    //i is 6 ,In pointer value doesn't copy
    cout << endl << "Increamenting" << endl;
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
    int arr[10] ={1,2,3,4,5};

    cout << arr <<" " << &arr << endl;
    cout << arr[0] << " " << &arr[0] << endl;

    //adding
    cout << "old value " << *arr << endl; //*arr means 0th value
    cout << "new value " << *arr +1 << endl << endl;
    
    //arr[i] = i[arr] = *(arr + i) that's interesting
    //*(arr +1) means take one step or add 4bytes
    cout << "abc " << *(arr +1 ) << " " << *arr + 1 << endl;

    int *p = &arr[0];
    cout << sizeof(arr) << " " << sizeof(&p) << endl;
    
    //we can't reassign the address of an array
    int m[10] ={1,6,3,7};
    int *t = &m[0];
    cout << "value of m " << m << endl;

    //an Error
    //m = m+1;  
    cout << *t << endl;
    //Here because address is store in something 
    t = t +1;  //it means add +4 byte to it
    cout << "ans " << *t<< endl;

}

void pointerBasic3(){

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
    cout << *temp << " " << *temp << endl;  // print entire array

    // char *t = "abcde";  //wrong method
    // cout << t <<endl;

}

void print(int &p){
    // *p = *p +1;
    p = p+1;
    // cout << "inside value " << *p << endl;
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
    // pointerBasic1();
    // pointerBasic2();
    // pointerBasic3();

    
    int value = 5;
    int *p = &value;
    cout << "old value " << *p << endl; //value
    cout << "old value " << p << endl;  //address

    print(value);
    // print(p);
    cout << "value new " << value << endl;
    cout << "new value " << *p << endl; //value updated
    cout << "new value " << p << endl;  //address not updated
    
    //getsum
    int arr[] = {1,2,3,4,5};
    cout << "sum is : " << getsum(arr+2 , 3) << endl;

}

////////////////////////////////////

//FUNCTION POINTER

// Pass-by-Value 
// int square1(int n) 
// { 
// 	// Address of n in square1() is not the same as n1 in 
// 	// main() 
// 	cout << "address of n1 in square1(): " << &n << "\n"; 

// 	// clone modified inside the function 
// 	n = n + 10;
// 	return n; 
// }
// // Pass-by-Reference with Pointer Arguments 
// void square2(int* n) 
// { 
// 	// Address of n in square2() is the same as n2 in main() 
// 	cout << "address of n2 in square2(): " << n << "\n"; 

// 	// Explicit de-referencing to get the value pointed-to 
// 	*n = *n + 10; 
// } 
// // Pass-by-Reference with Reference Arguments 
// void square3(int& n) 
// { 
// 	// Address of n in square3() is the same as n3 in main() 
// 	cout << "address of n3 in square3(): " << &n << "\n"; 

// 	// Implicit de-referencing (without '*') 
// 	n *= n; 
// } 

// int main() {

//     cout << "Call-by-Value" << endl;
// 	int n1 = 8;
// 	cout << "address of n1 in main(): " << &n1 << "\n"; 
// 	cout << "Square of n1: " << square1(n1) << "\n"; 
// 	cout << "No change in n1: " << n1 << "\n"; 

	
//     cout << endl << "Call-by-Reference with Pointer Arguments " << endl; 
// 	int n2 = 8; 
// 	cout << "address of n2 in main(): " << &n2 << "\n"; 
// 	square2(&n2); 
// 	cout << "Square of n2: " << n2 << "\n"; 
// 	cout << "Change reflected in n2: " << n2 << "\n"; 

//     cout << endl << "Call-by-Reference with Reference Arguments " << endl;  
// 	int n3 = 8; 
// 	cout << "address of n3 in main(): " << &n3 << "\n"; 
// 	square3(n3); 
// 	cout << "Square of n3: " << n3 << "\n"; 
// 	cout << "Change reflected in n3: " << n3 << "\n";
    
// }