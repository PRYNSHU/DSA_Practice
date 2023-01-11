
#include <iostream>
using namespace std;
void ref(){
    int i =8;
    //creating a ref variable 
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
    
    int n =5;
    cout << "before " << n << endl;
    update1(n);  //pass by value (n is copy in the fun)
    cout << "after " << n << endl;

    update2(n);  //pass by reference 
    //(new a variable is created ,but pointing to n of main function)
    cout << "after: " << n << endl;

    //dynamic memory allocation
    int *i = new int;
    cout << i << endl;

    //variable size array
    // int m;
    // cin >> m;
    // //arr array pointed to (array of variable size in heap) 
    // int *arr = new int[m];

    // //case 1
    // while(true){ //static memory allocated (delete and create...)
    //     int i= 5;
    // }
    
    // //case 2
    // while (true){  //dynamic memory allocation 
    //     int *arr = new int[40];
    // }
    int *c = new int ;
    delete c; //to delete dynamic memory


}