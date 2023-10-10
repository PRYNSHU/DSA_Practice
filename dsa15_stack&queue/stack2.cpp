#include "bits/stdc++.h"
using namespace std;

void reverse(string s){

    stack<char> st;
    for(int i =0;i<s.length();i++){
        st.push(s[i]);
    }
    cout << "size " << st.size() << endl;

    string ans = "";
    while(!(st.empty())){
        ans.push_back(st.top()); //push_back in string 
        st.pop();
    }
    cout << ans << endl;
}

int main(){
    string s = "workd";
    reverse(s);
}