#include "bits/stdc++.h"

using namespace std;

// int main() {
//     stack<int> st;
//     st.push(20);
//     st.push(40);
//     st.push(60);
//     st.push(80);
//     st.push(100);

//     st.pop();

//     //show
//     while(!st.empty()) {
//         cout << st.top() << " ";
//         st.pop();
//     }
//     cout << st.empty() << "\n";

//     cout << "stack test" << endl;
// }

int main() {

     queue<int> q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    cout << "size " << q.size() << endl;
    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;
    cout << q.empty() << endl;


    cout << q.back() << endl;

    cout << "print it!" << endl;

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }


}