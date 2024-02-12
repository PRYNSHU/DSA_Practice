#include "bits/stdc++.h"
using namespace std;

void array1(){ //memory already allocated 
    cout << endl << "array1" << endl;
    int a[4]= { 1,2,3,4};
    int arr[20] = {0}; //initialize all with zero

    array <int,4> b = {1,7,43,4};

    cout << a[2] << " " << b[2] <<endl;

    // just break the code in lines
    cout << b.at(2) << " " << b.front() << " "
    << b.back() << "& size is " << b.size();
}

void vector1(){ //memory allocated at run time
    cout << endl << "vectors" << endl;
    vector<int> v;
    cout << "size "<< v.size() << endl;
    v.push_back(4);
    
    cout << v.at(0) << endl;
    v.push_back(5);
    v.push_back(8);
    v.push_back(2);

    v.pop_back();
    // v.pop_back();

    cout << "print ";
     cout << v.size() << endl;
    for(int i=0 ;i<=v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl << "capacity "<< v.capacity() << endl;
    
    //for each loop
    for(int i:v){ // i == v[i] each value
        cout << i << " ";
    }

    cout << " \nnxt ";
    vector<int> a(7,2); // all A array element starts with 2

    for (int i:a){
        cout << i << " ";
    } cout << endl;

    //vector <int> l = v;
    vector <int > l(v); // vector l assign value of v vector and copied
    for (int i:l){
        cout << i << " ";
    } cout << endl;

    v.pop_back();
    cout << v.back() << " " << l.back();
}

void deque1(){
    cout << endl << "deque1" << endl;
    deque <int> d = {1,2,3,8,9};
    d.push_front(4);
    d.push_back(6);
    d.pop_front();
    
    for(int i:d){
        cout << i << ' ';
    }
}

void list1(){
    cout << endl << "list1" << endl;
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
    cout << endl << "stack1" << endl;
    stack<int> stack;
    stack.push(21);// all values must be of same data type
    stack.push(22);
    stack.push(24);
    stack.push(25);
    int num=0;
      stack.push(num);
    stack.pop();
    stack.pop();
   
    while (!stack.empty()) {
        cout << stack.top() <<" ";
        stack.pop();
    }
}

void queue1(){
    cout << endl << "queue" << endl;
    queue<int> q;
    q.push(8);
    q.push(7);
    q.push(10);
    q.push(2);
    cout << "first in first out is " << q.front()<< endl;
    q.pop();
    cout <<endl << q.front();
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


void sets(){
    cout << endl << "sets" << endl;
    //store in sorted and unique way
    // T.C -> logN
    set<int> st = {2,2,5,1,6,2,5,10};
    st.insert(3);
    //print
    for(auto it = st.begin();it !=st.end();it++){
        cout << *it << " ";
    }

    // //to find element
    if(st.find(3) != st.end())
        cout << "It is present" << endl;

    //check ele present or not
    cout << st.count(2) << " " << st.count(9) << endl;

    auto it = st.find(2); //it -> iterator
    cout << *(it) << endl;

    cout << "size before " << st.size() << endl;
    st.erase(5);
    cout << "size after " << st.size() << endl;

    //print
    for(auto it = st.begin();it !=st.end();it++){
        cout << *it << " ";
    }
    cout << "\n";
    //set empty or not
    cout << st.empty() << endl;

}

void maps(){
    cout << endl << "maps" << endl;
    //stored in key(in order) and value pairs
    map<int ,int> mp;
    mp[1] = 9;
    mp.insert({4,5});        
    mp.insert({3,8});
    mp.insert({2,3});
    mp.insert({5,8});

    for(auto it : mp){
        cout << it.first << "->" << it.second << endl;
    }
    cout << mp[1] << endl;

    // The function returns an iterator or a constant iterator 
    // which refers to the position where the key is present in the map.
    // If the key is not present in the map container, 
    // it returns an iterator or a constant iterator which refers to map.end(). 

    if(mp.find(3) != mp.end())
        cout << "key 3 is present" << endl;
    else
        cout << "not present" << endl;
        
    if(mp.find(8) == mp.end())
        cout << "key 8 is not present , iterator return end()";

}

void unorderedmaps(){
    cout << endl << "unorderedmaps" << endl;
    //store in random and key are always unique
    //T.C = O(1)
    unordered_map<int , int> mpp;

}

void pairs(){
    cout << endl << "pairs" << endl;
    //part of utility library
    pair<int , int> p = {3,4};
    cout << p.first << " " <<p.second << endl;

    pair<int , pair<int , int>> p2 = {1, {2,3}};

    pair<int, int> arr[] = {{1,2} , {3,4}};
    cout << arr[0].second << endl;
}

void iterators(){
    cout << endl << "iterators" << endl;
    vector<int> v = {10, 20, 30, 50, 80};
    cout << v[0] << endl;

    vector<int>::iterator it = v.begin(); //v.begin is pointing to memory add.
    it++;
    cout << *(it) << endl;

    vector<int>::iterator its = v.end();
    its--; //because v.end points to outside the vector
    cout << *(its) << endl;

    //printing 
    for(auto it = v.begin() ; it !=v.end() ;it++){
        cout << *(it) << " ";
    }
    cout << endl;

}

void priorityque(){

    priority_queue<int> pq ; //arrange in order of max ele at top and sorted
    pq.push(5);
    pq.push(1);
    pq.push(9);
    pq.push(3);

    cout << pq.top() << endl;

}

void vectors(){

    //dynamic array
    // int v2[1000] = {0}; //initializing all element with zero

    vector<int> v = {10, 20, 30, 50, 80};
        v.push_back(90);
        cout << v.back() << endl; //return last ele
        // v.clear(); //clear all ele
        
        //take address as an input , insert between the ele
        v.insert(v.begin() +1 , 11);
        cout << v[0] << " & at 1 index " << v[1] << endl;

        v.erase(v.begin() , v.end()); //from and to
        cout << v.empty() << endl; //check empty or not
}

void multisets(){

    //stored in sorted ,but not unique
    multiset<int> ms;

    ms.insert(3);
    ms.insert(3);
    ms.insert(1);
    ms.insert(5);
    ms.insert(2);
    ms.insert(3);

    ms.find(2);
    cout << "size " << ms.size() << endl;
    // ms.erase(3); //erase all 3
    ms.erase(ms.find(3)); //erase only 3
    cout << "size " << ms.size() << endl;

}

void unorderedsets(){

    //stored in unique and in random order
    // T.C = O(1)
    unordered_set<int> us;
}

void max_min(){
    vector<int>v {4,2,5,9,1};
    cout<<"The elements in the vector are: ";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    cout<<"The max element: "<<*max_element(v.begin(),v.end());
    cout << endl;
    cout<<"The mini element: "<<*min_element(v.begin(),v.end());
}

int main(){
    // array1();
    // vector1();
    // deque1();
    // list1();
    // stack1();
    // queue1();

    // sets();

    // pairs();
    // iterators();

    // vectors();
    // multisets();
    // unorderedsets();

    // maps();
    // max_min();

    // priorityque();
}
