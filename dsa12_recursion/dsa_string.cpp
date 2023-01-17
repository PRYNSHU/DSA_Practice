#include "bits/stdc++.h"
using namespace std;

//============PROGRAM FOR STRING SWAP ,BY LOOPING============
// void reverse(string &s){
//     int i =0,  j = s.length() -1;

//     while(i<j){
//         swap(s[i] , s[j]);
//         i++;
//         j--;
//     }
//     return;
// }

// int main(){
//     string s ="abcde";
//     cout << s << endl;
//     reverse(s);
//     cout << s << endl;

// }

//=========PROGRAM BY RECURSION============

void reverse(string& s , int i ,int j){
    //base cond
    if(i>j)
        return;

    swap(s[i] , s[j]);
    
    //rec rel
    reverse(s , i +1 ,j -1);
    reverse(s , i +1 ,j -1);

}

int main(){
    string s = "abcde";
    cout << s << endl;

    int i =0 , j = s.length()-1;
    reverse(s , i , j);
    cout << s << endl;

}
//PROGRAM TO CHECK RECURSION

// bool check(string s , int i ,int j){
//     //base cond
//     if(i>j)
//         return 1;

//     if(s[i]==s[j]) return check(s , i+1 ,j-1);
//     else return false;
// }


// int main(){
//     string s = "acbaabca";
//     string t = "abcdba";
//     cout << s << endl;
//     if(check(s, 0 , s.length() -1)) cout << "palindrome";

//     else cout << "not a palindrome";
    
// }

// int rec(int a ,int b){
//     //base cond
//     if(b==0) 
//     return 1;

//     //rec rel
//     int c = rec(a , b/2);
    
//     if(b&1) //odd
//         return a * c *c;
//     else
//         return c * c;
// }

// int main(){
//     int a = 3 , b= 11;
//     int ans = rec(a ,b);
//     cout << ans;

// }












