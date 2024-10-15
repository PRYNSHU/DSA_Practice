#include <bits/stdc++.h>
using namespace std;


void sets(){

    //store in sorted and unique way
    // T.C -> logN
    set<int> st = {2,2,5,1,6,12,10};
    st.insert(3);

    if(st.find(3) != st.end())
        cout << "It is present" << endl;

    auto it = st.find(2);
    cout << *(it) << endl;

    cout << st.size() << endl;
    st.erase(2);
    cout << st.size() << endl;

    //check ele present or not
    cout << st.count(5) << " " << st.count(9) << endl;

    //print
    for(auto it = st.begin();it !=st.end();it++){
        cout << *it << " ";
    }
    cout << "\n";
    //set empty or not
    cout << st.empty() << endl;

}

void maps(){

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
    //store in random and key are always unique
    //T.C = O(1)
    unordered_map<int , int> mpp;

}

void pairs(){
    //part of utility library
    pair<int , int> p = {3,4};
    cout << p.first << " " <<p.second << endl;

    pair<int , pair<int , int>> p2 = {1, {2,3}};

    pair<int, int> arr[] = {{1,2} , {3,4}};
    cout << arr[0].second << endl;
}

void iterators(){

    vector<int> v = {10, 20, 30, 50, 80};
    cout << v[0] << endl;

    vector<int>::iterator it = v.begin(); //v.begin is pointing to memory add.
    it++;
    cout << *(it) << endl;

    vector<int>::iterator its = v.end();
    its--; //because v.end points to outside the vector


    //printing 
    for(auto it = v.begin() ; it !=v.end() ;it++){

        cout << *(it) << " ";
    }
    cout << endl;
    cout << *(its) << endl;

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
    // sets();

    // //about pairs
    // pairs();
    // iterators();

    // vectors();
    // multisets();
    // unorderedsets();

    maps();
    // max_min();

    // priorityque();

}