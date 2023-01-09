#include "iostream"
using namespace std;
#include "array"
#include "vector"
#include "deque"
#include "list"
#include "stack"
#include "queue"


void array1(){
    int a[4]= { 3,45,6,5};
    array <int,4> b = {6,7,43,1};

    cout << a[2] << " " << b[2] <<endl;

    // just break the code in lines
    cout << b.at(3) << " " << b.front() << " "
    << b.back() << " size_is " << b.size();
}

void vector1()
{   
    vector<int> v;
    cout << v.size();
    v.push_back(4);
    
    cout << v.at(0) << endl;
    v.push_back(5);
    v.push_back(8);

    // v.pop_back();
    // v.pop_back();

    cout << "print ";
     cout << v.size() << endl;
    for(int i=0 ;i<=v.size();i++){
        cout << v[i] << " ";
    }
    cout << "capacity "<< v.capacity() << endl;

    for(int i:v){
        cout << i << " ";
    }

    cout << " \nnxt ";
    vector<int> a(7,2); // all A array element starts with 2

    for (int i:a){
        cout << i << " ";
    } cout << endl;

    vector <int > l(v); // vector l assign value of v vector
    for (int i:l){
        cout << i << " ";
    }
}

void deque1(){
    deque <int> d = {1,2,3,8,9};
    d.push_front(4);
    d.push_back(6);
    d.pop_front();
    
    for(int i:d){
        cout << i << ' ';
    }
}

void list1(){
    list <int > l;
    l.push_back(5);
    l.push_front(8);

    for(int i:l){
        cout << i << " ";
    }cout << endl;

    l.erase(l.begin());
    for(int i:l){
        cout << i << " ";
    }
    list <int> n(4,20);
    for(int j:n){
        cout << j << " ";
    }
}

void stack1(){
    stack<string > s;
    s.push("a");
    s.push("b");
    s.push("c");
    cout<< s.top();
    s.pop();
    cout << s.top();
}

void queue1(){
    queue<int> q;
    q.push(8);
    q.push(7);
    q.push(10);
    q.push(2);
    cout << "first in first out is " << q.front()<< endl;
    // q.pop();
    // cout <<endl << q.front();
    int n = q.size();
    for(int i=0;i<n;i++){
        cout << q.front() <<" ";
        q.pop();
    }

    // priority_queue<int> p;
    // p.push(7);
    // p.push(1);
    // p.push(9);
    // p.push(0);
    // int n = p.size();
    // for(int i=0;i<n;i++){
    //     cout << p.top() <<" ";
    //     p.pop();
    // }
}

int main(){
    // array1();
    // vector1();
    // deque1();
    // list1();
    // stack1();
    // queue1();
}









