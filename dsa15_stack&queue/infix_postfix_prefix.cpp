#include "bits/stdc++.h"
using namespace std;

int prec(char c){

    if(c == '^')
        return 3;
    else if(c == '*' || c == '/')
        return 2;
    else if(c == '+' || c == '-')
        return 1;
    else 
        return -1;
}

string infixtopostfix(string s){

    string post = "";
    stack<char> st;
    for(int i = 0;i < s.length(); i++){

        if(s[i] >= 'a' && s[i] <= 'z' ||
            s[i] >= 'A' && s[i] <= 'Z'){
                post +=s[i];
        }
        else if(s[i] == '('){
            st.push(s[i]);
        }
        else if(s[i] == ')'){
            while (!st.empty() && st.top() != '('){
                post +=st.top();
                st.pop();
            }
            if(!st.empty())
                st.pop();
        }
        else{ // operators are coming
            while(!st.empty() && prec(s[i]) < prec(st.top()) ){
                post += st.top();
                st.pop();
            }
            st.push(s[i]);
        }


    }   
    while (!st.empty())
    {
        post += st.top();
        st.pop();
    }
    
    return post;
}

int main(){
    //REMEMBER GAPS ARE IMPORTANT IN STRING
    cout << infixtopostfix("(a-b/c)*(a/k-l)") << endl;
}