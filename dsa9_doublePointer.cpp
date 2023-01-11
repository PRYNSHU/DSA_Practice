#include "iostream"
using namespace std;

void pointer1(){
    int i =9;
    int *p =&i;
    int **p2 = &p;
    int ***p3 = &p2;

    //address
    cout << &i <<endl;
    cout << p << endl;
    cout << p2 << endl;

    //values
    cout << endl << "values" << endl;
    cout << i << endl;
    cout << *p << endl; 
    cout << **p2 << endl;
    cout << ***p3 << endl;
    

    //*p++;  //wrong way
    (*p)++;  //right way or *p = *p+1;
    cout << endl << (*p)++ << endl;  //post increament
    cout << i <<endl;
    
    int first = 110;
    int *sec = &first;
    int **q = &sec;

    int p1 = (**q)++ + 9;
    cout << endl << first << " " << p1 << endl;
    
}
int main(){
    pointer1();
}