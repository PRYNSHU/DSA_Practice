// C++ language is case sensitive , ignore white spaces, commandwork horizontally, 
// a statement end with semi-colon; , quotes and double quotes have differences .

#include <iostream>
using namespace std; /// still confusion.

int main()
{
    cout << "HI" << endl;
    cout << (" everyone \n"); cout << " noon";
    cout << "\twelcome back";
    cout << (5);   
}


//int main () { cout << "Hello World! "; return 0; }

///////////////////////////////////////////////////////////

//  main(){
//     float a= 4, aa= 44 , bb=66; int b = 4.4;
//     int c= 'g';
//     string s= "hell";
//      const int p= 99;
//     cout << "a is " << a<< "  b"<< b;
//     cout << "\n ";
//     cout << "c and s" << c << "\n" << s; 
// }

//////////////////////////////////////////////////////////

// int main()
// {
//     int x,y ;
//     cout << "this is a calculator";
//     cout << "\n numbers ";
//     cin >>x >>y ;
//     cout << "ans is " << x+y << "\n" << x-y << x*y;
// }

///////////////////////////////////////////////////////////
// #include "typeinfo"
// int main(){
    
//     int a=5,b;
//     b= a+6;
//     cout << (b+5);
//     cout << ("\n");
//     int x=4, y=8;
//      cout << typeid(b).name() << endl;
//     cout << !(x==4 && y<9);

// }

///////////////////////////////////////////////////////////

// int main(){
//     string s= "aeroplanes" , t= "fly";
//     string f= s+" " +t;
//    // cout << s+t <<"hi";
//     cout << s.append(t);
//     t.append(s);
//    // cout <<s;
//     cout <<t;
// }

//////////////////////////////////////////////////////////

// int main(){
//     string a ,name;
//     string n= "time-machine";
//     a= n.length();
//     cout << n.size();
//     cout <<"\n";

//     a= n[2];
//     cout << a;
//     n[0]= 'l';
//     cout << n;
//         cout <<"\n";
//     cin >> name;
//     cout << name;

// }

///////////////////////////////////////////////////////////

// #include <cmath>
// int main(){
//     cout << max(5,7) << min (8,9);
//     cout << max(2,3);
//     int a= sqrt(25);
    
//     cout << " " << a;
//     bool m= true;
//     bool n= false;
//     cout << m ;
//     cout << (3==4);

// }

//////////////////////////////////////////////////////////

// int main(){
//     int a,b;
//     cout<< "start\n";  
//     cin >> a>> b;
//     if(a>b)
//     {
//         cout << "i won";
//     }
   
//     if (a==b){
//         cout << "oo yeee";
//     }
//     else
//     {
//         cout << "i loose";
//     }
    
// }

/////////////////////////////////////////////////////

// int main(){
//     int t;
//     cin >> t;
//     if(t<10){
//         cout << "morning";
//     }
//     else if(t==18){
//         cout << "unexpected";
//     }
//     else if(t<20){
//         cout << "noon";
//     }
//     else
//     {cout << "oonoo!";}

// }

/////////////////////////////////////////////////////

// int main(){
//     int a=444;
//     string d= (a>50) ?  "yes": "no"; // ternary operator
//     cout << d;
// }

//////////////////////////////////////////////////////

// int main(){
//     int a=2;
//     switch(a+10){
//         case 2:
//         cout << "hi";
//        // break;

//         case 12:
//         cout << "hello";
//         //break;

//         case 124:
//         cout << "yes";
//         //break;

//         default:
//         cout << "no";

//     }
//     cout <<"\ntime req.";
// }

/////////////////////////////////////////////////////

// int main()
// {
//     int i=1;
//     while(i<9){
//         cout << i <<"\n";
//         i++;
//     }
// }

////////////////////////////////////////////////////////////

// int main(){
//     int i,j;
//     // for (i=1;i<=5;i++){
//     //     for(j=1;j<=i;j++){
//     //         cout << j;
//     //     }
//     //     cout << "\n";
//     // }


//     for(int i=0;i<10;i++){
//         if(i==5){
//             //continue;
//             break;
//         } cout << i<<"\n";
//     }

// }

/////////////////////////////////////////////////////////

// int main(){
//   string cars[8] = {"Volvo", "BMW", "Ford"};
//   cars[0] = "Mazda";
//   cars[4] = "Tesla";
//   for(int i = 0; i < 5; i++) {
//     cout << cars[i] << "\n";
//   }

//   int num[] ={2,0,50,66,98};
//   cout << sizeof(num)/sizeof(int); // initially it give total byte using so need to divide.

// }

/////////////////////////////////////////////////////////

// int main(){
//     cout <<"ohk";
//     int m[2][3] ={
//         {1,2,3},
//         {4,5,6}
//     };
//     cout << m[0][2];
// }

///////////////////////////////////////////////////////

// int main(){
//     struct {
//         string brand;
//         string model;
//         int year;
// } myCar1, myCar2; // We can add variables by separating them with a comma here

// // Put data into the first structure
// myCar1.brand = "BMW";
// myCar1.model = "X5";
// myCar1.year = 1999;

// // Put data into the second structure
// myCar2.brand = "Ford";
// myCar2.model = "Mustang";
// myCar2.year = 1969;

// // Print the structure members
// cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
// cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
// }























