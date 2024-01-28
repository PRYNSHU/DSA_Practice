#include "bits/stdc++.h"
using namespace std;

// int main(){
//     string s = "I love you";
//     stack<string> st;
//     st.push("I");
//     st.push("love");
//     st.push("you");
//     st.pop();
//     cout << "print----";
//     cout << st.top();
// }

// int main(){

//     int a = 97;
//     char c = 'e';
//     cout << int(c) << " " << char(a) << endl;
    
// }
// int main()
// {
//     vector<int> arr = {4,5,6,7,2,2,1};
//     int maxemt = *max_element(arr.begin() , arr.end()); //Its an iterator
//     int maxindex = *max_element(arr.begin() , arr.end()) - *arr.begin();
//     cout << maxemt  << " " << maxindex;

//     cout << endl;
//     cout << *(arr.end()-1);
//     return 0;
// }

string frequencySort(string s) {
        
        int cnt = 1;
        string st = "";
        vector<int> v(256 , 0);
        //sorting 
        sort(s.begin() , s.end());

        //freq
        for(int i =0; i<s.length() -1; i++){
            char c = s[i];
            if(c == s[i+1]){
                cnt++;
            }else{
                // add to the vector
                int ascii = int(c);
                v[ascii] = cnt;
                cnt = 1;
            }
            
        }

        //creating the string
        while(1){

            int maxemt = *max_element(v.begin(), v.end());
            int maxindex = *max_element(v.begin(), v.end()) - *v.begin();
            char ch = char(maxindex);
            while(maxemt--){
                st += ch;
            }
            v[maxindex] = 0;
            if(maxemt == 0) 
                break;
        }

        return st;
}

int main(){

    string s = "treeier";
    
}