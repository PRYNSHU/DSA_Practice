#include <iostream>
using namespace std;

// Function declaration
void myFun();

// The main function
int main() {
  myFun();  // call the function
  myFun();
  return 0;
}

// Function definition
void myFun() {
  cout << "I just got excited!" <<endl;
}
/////////////////////////////////////////////

// void fun1(int n1){ //call by value
//   n1 = 8;
// }

// void fun2(int *n1){ //call by reference with pointer argument
//   *n1 = 8;
// }

// void fun3(int &n1){ //call by reference with reference argument
//   n1 = 8;
// }

// int main(){
//   int n =2;

//   fun1(n);
//   // fun2(&n);
//   // fun3(n);
//   cout << n << endl;

// }

////////////////////////////////////////////////////

// void time(int i,int j=100);
// int num(int a,int b);

// int main(){
//     time(10,20);
//     time(55);
//     int x=num(6,8);
//     cout << x;
// }

// void time(int i,int j){
//     cout << i << " " <<j << endl ;
// }

// int num(int a,int b){
//     return a+b;
// }

/////////////////////////////////////////////////

// void aim(int a,int b);

// int main(){
//     int a =2,b=5;
//     cout <<a <<b<<endl;
//     aim(8,7);
//     cout <<a <<b;
// }

// void aim(int a,int b){
//     b=a+10;
//     a++;
//     cout <<a <<b<<endl;
// }

// int lop(int i){
//     if(i>0){
//         return i+lop(i-1);
//     }
//     else{
//         return 0;}
// }

// int main(){
//    int a= lop(5);
//    cout <<a;
// }





