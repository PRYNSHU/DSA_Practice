#include "bits/stdc++.h"
using namespace std;

int getlen(char ch[]){
    int cnt =0;
    int i =0;
    while(ch[i] != '\0'){
        cnt++;
        i++;
    }
    return cnt;
}

void reverse(string s ,int n){
    int st = 0;
    int e = n-1;
    while(st<e){
        swap(s[st++] , s[e--]);   
    }
    cout << "reverse " << s << endl;
}

void conversion(){

    char ch[10];
    cin >> ch;
    //convert to lowercase
    ch[1] = ch[1] -'A' + 'a';
    //convert to uppercase 
    ch[0] = ch[0] -'a' + 'A';
    ch[2] = ch[2] + 1;
    cout << "new " << ch << endl;
    //convert char to int
    char m = '3';
    m = m-'0';
    cout << m + 3 << endl;
}

void fun1(){
    int cnt = 10;
    string s = to_string(cnt); // int to string
    cout << s << endl;
    char c;
    //string to char
    for(char ch : s){
        c = ch;
    }
    int n = c - '0';
    // int n1 = s - '0'; 
    cout << n + 4<< endl;
}

void fun2(){

   string str = "Hemlo world";
   str.append("z"); //adding char/string
   str.erase(1 , 3); //erase the three element form 1 index
   cout << str << endl;

   str.erase(str.begin() + 3); //erase at ith position
    cout << str << endl;

    str.pop_back();
    str.push_back('m');
    cout << str << endl;
}

int main(){
    
    // char c = 'z'; // as a char element
    // char ch[10];  // as a char array, which stores elements form 0 to 9
    // cout << "print it" << endl;

    // cin >> ch;
    // cout << "any value " << ch[0] << endl; //print that element
    // cout <<  "full value " << ch << endl;

    // // ch[2] = '\0';        //null character ( to break the array)
    // // cout << ch << endl; //print whole array
    // int len = getlen(ch);
    // cout << len << endl;

    // char ch[50];
    // cin.getline(ch , 50); //to print with space for input
    // cout << ch << endl;

    // conversion();
    // reverse(ch , len);

    // fun1();
    // fun2();

    cout << 'm' +1 ;

}

