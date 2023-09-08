#include "bits/stdc++.h"
using namespace std;

class Queue {
    int *arr;
    int size;
    int f;
    int rear;
public:
    Queue(){
        size = 10009;
        arr = new int[size]; // here int arr[size] is different?
        f =0;
        rear =0;
    }

    bool isEmpty() {
        if(f == rear)
            return true;
        else
            return false;
    }

    void enqueue(int data) {
        //push
        if(rear == size){
            cout << "full" << endl;
        }else{
            arr[rear] = data;
            rear++;
        }
        
    }

    int dequeue() {
        // pop
        if(f == rear)
            return -1;
        else{
            int ans = arr[f];
            f++;
            if(f == rear){
                f = 0;
                rear =0;
            }
            return ans;
        }

    }

    int front() {
        if(f == rear)
            return -1;
        else{
            return arr[f];
        }
    }
};

void basics(){

    queue<int> q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);

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


int main(){

    //queue followed FIFO approach
    //imagine like a row of children

    basics();
    Queue q1;
    q1.enqueue(33);
    cout << "\nempty " <<  q1.isEmpty() << endl;

}



