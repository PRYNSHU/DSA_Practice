#include <bits/stdc++.h>
using namespace std;

    void solve(int oc , int cc , vector<string> &ans , string s, int n){

        if(oc == n && cc == n){
            ans.push_back(s);
            return;
        }

        //add open bracket
        if(oc < n){
            s += '(';
            solve(oc +1 , cc , ans , s, n);
        }
        
        //closing bracket
        if(oc > cc){
            s += ')';
            solve(oc , cc +1, ans , s , n);
        }

    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        solve(0 , 0 , ans , "" , n);
        return ans;
    }
class MyStack {
public:
    queue<int> q1;
    queue<int> q2;
    MyStack() {
       
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        for(int i = 1;i< q1.size();i++){
            q2.push(q1.front());
            q1.pop();
        }
        int ans = q1.front();
        q1.pop();

        //re-add the elements to q1
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        return ans;
    }
    
    void top() {
        int ans;
        for(int i = 1;i<= q1.size() ;i++){
            cout << q1.front() << " ";
            ans = q1.front();
            q2.push(q1.front());
            q1.pop();
        }
        cout << q1.size() << "s";

        //re-add the elements to q1
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        // return ans;
    }
    
    bool empty() {
        return q1.empty();
    }
};

int main(){
    // int n =3;
    // vector<string> a = generateParenthesis(n);
    
    // for(auto i : a){
    //     cout << i << " ";
    // }

    MyStack s =  MyStack();
    s.push(1);
    // s.push(2);

    s.top();
}