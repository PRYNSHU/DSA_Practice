#include <iostream>
using namespace std;

void ref(){
    int i =8;
    //creating a reference variable 
    int &j = i;  //i and j points same memory location
    cout << i << " " << j << endl;

    i++;
    cout << i << endl;
    j++;
    cout << i << endl;
}

void update1(int n){  //pass by value
    n++;
}
void update2(int &a){  //pass by reference
    a++;
}

int main(){
    //ref();
    
    // int n =5;
    // cout << "before " << n << endl;
    // update1(n);  //pass by value (n is copy in the fun)
    // cout << "after " << n << endl;

    // update2(n);  //pass by reference
    // //(new a variable is created, but pointing to n of main function)
    // cout << "after: " << n << endl;

    //pointer vs ref
    // int n = 3;
    // int *n1 = &n; // pointer
    // cout << n1 << " " << *n1 << " " << &n << endl;

    // int m = 5;
    // int &a = m; //reference variable
    // cout << a << " " << &a << " "<< &m << endl;

    //DYNAMIC MEMORY ALLOCATION
    int *i = new int;
    // int *i = new int(6);
    cin >> *i;
    cout << i << " " << *i << endl;

    // //variable size array
    int m;
    cin >> m;
    //arr array pointed to (array of variable size in heap) 
    int *arr = new int[m];

    // //case 1
    // cout << "case 1" << endl;
    // while(true){ //static memory allocated (delete and create...)
    //     int i= 5;
    // }
    
    // //case 2
    // cout << "case 2" << endl;
    // while (true){  //dynamic memory allocation 
    //     int *arr = new int[40];
    // }
    // int *c = new int ;
    // delete c; //to delete dynamic memory

}