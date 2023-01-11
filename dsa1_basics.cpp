#include<iostream>
using namespace std;

// int main(){
//     for(int i=1;i<=5;i++){
//         int space= 5-i;
//         for(int j=1;j<=space;j++){
//             cout <<" ";
//         }
//         for(int k=1;k<=i;k++){
//             cout <<k;
//         }
//         for (int n=1;n<=i-1;n++){
//             cout <<i-n;
//         }
//         for(int j=1;j<=space;j++){
//             cout <<" ";
//         }
//         cout << endl;
//     }
// }
//////////////////////////////////////

//didn't get the ans:
// #include "math.h"
// int main(){
//     int n;
//     cin >> n;
//     int i=0, ans=0;
//     while(n!=0){
//         int bit = n&1;
//         ans =( bit * pow(10,i)) + ans;
//         n=n>>1;i++;
//         cout << ans <<endl;
        
//     }
//     cout << ans;
// }
///////////////////////////////////

// bool even(int a){
//     if (a&1){
//         return 0;
//     }
//     else{
//         return 1;
//     }
// }

// int main(){
//     int ans;
//     cin >>ans;
//     if (even(ans)){
//         cout << "even";
//     }
//     else{
//         cout << "odd";
//     }
// }
//////////////////////////////////

// int fact(int f){
//     int a=1;
//     for (int i=1 ;i<=f;i++){
//         a=a*i;
//     }
//     return a;
// }
// int ans(int n,int r){
//     int num = fact(n);
//     int deno = fact(r)* fact(n-r);
//     return num/deno;
// }
// int main(){
//     int n ,r;
//     cin >> n>>r;
//     int result = ans(n,r);
//     cout << result;
// }
/////////////////////////////////

// int main(){
//     int i,j,k,l;
//     for (i=5;i>=1;i--){
//         for (j=1;j<=i;j++){
//             cout << j;
//         }
//         for(j=1;j<=(5-i);j++){
//             cout << " ";
//         }
//         for (k=1;k<=(5-i);k++){
//             cout << " ";
//         }
//         for (l=i;l>=1;l--){
//             cout << l;
//         }
//         cout << endl;
//     }
// }
//////////////////////////////

// void array(int ar[]){
//     for (int i=0;i<=8;i++){
//         cout << "array is " << i <<"-"<<ar[i]<<endl;
//     }
// }
// int main(){
//     int one[10]= {3,6};
//     cout << one[0] <<endl;
//     array(one);

// }
///////////////////////////////

// int max(int a[],int n){
//     int max = INT32_MIN;
//     for (int i =0;i<=n;i++){
//         if(a[i]> max){
//             max=a[i];
//         }
//     }
//     return max;
// }

// int main(){
//     int b[100]={4,60,2,8,9};

//     int a = max(b,5);
//     cout << "ans is :" <<a;
    
// }
///////////////////////////////

// int main(){
//     bool a= 0;
//     bool a1= true;
//     cout << a << "  " << a1;
//     if(a) { cout << " ohk";}
//     if (a1){ cout << " hhh";}
// }
/////////////////////////////////

// int main(){
//     int a[100]= {1,2,3,4,5,6};
//     int size=6;
//     int c;

//     for (int i =0;i<size/2; i++){

//         // c= a[size-i-1];
//         // a[size-i-1]=a[i];
//         // a[i]=c;
//         swap(a[i], a[size-i-1]);
//     }
//     for (int i =0;i<size; i++){
//         cout << a[i] << " ";
//     }
// }
//////////////////////////////////////

// void alternate(int a[], int n){
//     int s1=0;
//     int s2= s1 +1;
//     while(s1+1<n){
//         swap(a[s1],a[s2]);
//         s1=s1+2;
//         s2 =s1+1;
//     }
// }
// void printarray(int a[],int n){
//     for (int i=0;i<n;i++){
//         cout << a[i]<< " ";

//     }
// }

// int main(){
//     int a[100]={3,5,22,7,2,10};

//     printarray(a,6);
//     cout << endl;
//     alternate(a,6);
//     printarray(a,6);

// }
////////////////////////////////////
//
// int main(){
//     int t,n; 
//     cin >> t >> n;
//     cout << endl;
//     int a[100];
//     for (int i=1;i<=t;++i){
//         for (int i=1;i<=n;i++){
//         cin >> a[i];
//     }
//     for (int i=1;i<=n;i++){
//         cout << a[i] << " ";
//     }
//     }
    
// }
/////////////////////////////////////////

// int main(){
//     int arr1[6]= {1, 2, 2, 2, 3, 4};
//     int arr2[4] = { 2,20,3,3};
//     for (int i=0;i<6;i++){
//         for (int j=0;j<4;j++){
//             if(arr1[i]==arr2[j]){
//                 cout << arr1[i] << " ";
//                 break;
//             }
//         }
//     }
// }




