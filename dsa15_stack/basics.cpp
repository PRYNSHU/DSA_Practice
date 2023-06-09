#include "bits/stdc++.h"
using namespace std;

void basics(){
    
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    st.pop();

    cout << st.top() << endl; //to print the top element
    cout << st.empty() << endl; // return true or false

    //print whole stack
    while(!(st.empty())){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

class stack1{
    public:
        //properties
        int top =-1;
        int *arr;
        int size;
    
    //cons
    stack1(int size){
        this->size = size;
        arr = new int[size]; //dynamically array declared
        // int arr[size];
    }

    //behaviours
    void push(int d){
        if(top < size -1){
            top++;
            arr[top] = d;
        }else{
            cout << "no space available" << endl;
        }
    }

    void pop(){
        if(top == -1){
            cout << "empty stack" << endl;
        }else{
            top--;
        }
    }

    int peek(){
        return arr[top];
    }

    bool empty(){
        if(top == -1)
            return true;
        else
            return false;
    }
};

int main(){

    //LIFO (last in first out concept)
    cout << "Stack" << endl;
    basics();

    // //implement the stack by array using class & obj
    stack1 st(5);

    st.push(11);
    st.push(12);
    st.push(13);
    st.push(14);

    cout << st.peek() << endl;

    st.pop();
    cout << st.peek() << endl;
    cout << st.empty() << endl;

    //Implement stack using linkedlist ..?

}