#include "bits/stdc++.h"
using namespace std;

//how to implement 
class Node{
    public:
        int data;
        Node * nxt;

    //cons 
    Node(int d){
        this->data = d;
        this->nxt = NULL;
    }
};

int main(){
    //creating the nodes
    Node * one = new Node(10);
    Node * two = new Node(20);

    //connecting the nodes
    one->nxt = two;
    two->nxt = NULL;
    Node * head = one;

    //print ithe node
    while(head != NULL){
        cout << head->data << " ";
        head = head->nxt;
    }

}

