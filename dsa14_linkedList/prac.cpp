#include "bits/stdc++.h"
using namespace std;

//create the node
class Node{
    public:
        int data;
        Node* nxt;
    
    Node(int d){
        this->data = d;
        this->nxt = NULL;
    }

};
void insertAthead(Node* &head , int a){
    Node* temp = new Node(a);
    temp->nxt = head;
    head = temp;
}

void insertAttail(Node* &tail , int a){
    Node* temp = new Node(a);

    tail->nxt = temp;
    tail = temp;
    temp->nxt = NULL;
    
}
void print(Node* &head){
    
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->nxt;
    }
}

int main(){
    Node* head = NULL;
    Node* one = new Node(10);
    Node* two = new Node(20);

    one->nxt = two;
    two->nxt = NULL;
    head = one;
    Node* tail = two;

    print(head);
    insertAthead(head , 30);
    insertAthead(head , 40);
    cout << endl;

    print(head);
    cout << endl;

    insertAttail(tail , 50);
    insertAttail(tail , 60);

    print(head);
    
    
}