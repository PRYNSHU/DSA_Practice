#include <bits/stdc++.h>
using namespace std;

// // void fun1(int i , vector<int> &v , int arr[] , int n ){

// //     if(i == n){
// //         //print the array
// //         for(int m : v)
// //             cout << m << " ";
// //         cout << endl;
// //         return;
// //     }
    
// //     //add i.e take fun
// //     v.push_back(arr[i]);
// //     fun1(i +1 , v , arr , n);
// //     v.pop_back();

// //     //remove i.e not take fun
// //     fun1(i +1 , v , arr , n);

// // }

// // int fun2(int i , vector<int> &v , int arr[], int n , int sum){

// //     if(i == n){
// //         if(sum == 2){
// //             //print
// //             // for(int i: v)
// //             //     cout << i << " ";
// //             // cout << endl;
// //             return 1;
// //         }
// //         return 0;
// //     }

// //     //take
// //     v.push_back(arr[i]);
// //     sum += arr[i];

// //     int l = fun2(i +1 , v , arr , n , sum);
// //     v.pop_back();
// //     sum -= arr[i];

// //     //not take
// //     int r = fun2(i +1 , v , arr , n , sum);

// //     return l+r;
// // }

// // int main(){
// //     // int arr[] = {3,1,2};
// //     // int n =3;

// //     // vector<int> v;
// //     // fun1(0 , v , arr , n);


// //     int arr[] = {1,2,1};
// //     int n = 3;

// //     vector<int> v;
// //     cout << fun2(0 , v , arr , n, 0) << endl;
// // }

// //===========================================//


// // int main(){
//     // no of factors
// //     int n = 36;
// //     for(int i =2;i<=sqrt(n);i++){
// //         if(n%i ==0 ){
// //             cout << i << " " << n/i;
// //             cout << endl;
// //         }

// //     }
// // }

// //==============

// // bool fun(int n){

// //     for(int i =2;i<=sqrt(n);i++){
// //         if(n%i == 0)
// //             return 0;
// //     }
// //     return 1;
// // }

// // void countprime(int n){
// //     int ans =0;
// //     for(int i =2;i<n;i++){
// //         if(fun(i)){ //if it is a prime number
// //             cout << i << endl;
// //             ans++;
// //         }
// //     }
// //     cout << "total " << ans;
// // }

// // int main(){
// //     int n =100;
// //     countprime(n);
    
// // }

// //

// //===============================

// void seq(int index , string &s , int n){

//     if(index == n){
//         cout << s << endl;
//         return;
//     }

//     //take 0
//     s[index] = '0';
//     seq(index +1 , s , n);

//     //take 1
//     s[index] = '1';
//     if(!(s[index] == '1' && s[index -1] ==  '1')){
//         seq(index +1 , s , n);
//     }
    
// }

// int main(){
//     int n =4;
//     string s = "0000";

//     seq(0 , s , n);
// }


// //=====================================


// string genseq(string &s, int ob, int cb, int n) {
//     if (ob == n && cb == n) {
//         return s;
//     }

//     string result;
    
//     // add open bracket
//     if (ob < n) {
//         s.push_back('(');
//         result += genseq(s, ob + 1, cb, n);
//         s.pop_back(); // backtrack
//     }

//     // add closing bracket
//     if (cb < ob) {
//         s.push_back(')');
//         result += genseq(s, ob, cb + 1, n);
//         s.pop_back(); // backtrack
//     }

//     return result;
// }

// int main() {
//     int n = 3;
//     vector<string> v;
//     string s = "";
//     string ans = genseq(s, 0, 0, n);
//     v.push_back(ans);

//     // print
//     for (int i = 0; i < v.size(); i++) {
//         cout << v[i] << endl;
//     }
// }

//=======================


int fib(int n) {
        //base cond
        if(n==1)
            return 1;
        
        if(n==0)
            return 0;

    (fib(n-1) + fib(n-2));
}

int main(){
    int n =5;
    int ans = fib(n);
    cout << ans;
}