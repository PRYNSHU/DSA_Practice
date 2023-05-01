#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* prev;
        Node* nxt;
    
    //cons
    Node(int d){
        this->data = d;
        this->nxt = NULL;
        this->prev = NULL;
    }
};

void print(Node* head){
    Node* temp = head;

    while(temp!= NULL){
        cout << temp->data << " ";
        temp = temp->nxt;
    }
    cout << endl;
}


int main(){

    Node* one = new Node(10);
    Node* two = new Node(20);
    one->nxt = two;
    
    Node* head = one;
    print(head);
}