#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    vector<int> fun(int n){
        //code here
    }

};

int main(){
    //test cases
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >>n;
        solution obj1;
        vector<int> ans = obj1.fun(n);
        for(int i:ans){
            cout << i << " ";
        }
        cout << endl;

    }
    
}
