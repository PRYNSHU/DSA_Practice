#include "bits/stdc++.h"
using namespace std;

class Node{
    public:
        int data;
        Node * pre;
        Node * nxt;

    //constructor call
    Node(int d){
        this->data = d;
        this->pre = NULL;
        this->nxt = NULL;
    }
};

void print(Node *head){

    Node * temp = head;
    int len = 0;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->nxt;
        len++;
    }
    cout << "length is " << len << endl;
}

void insertAtHead(Node* &head , int d){

}

int main(){
    Node * one = new Node(10);
    Node * two = new Node(20);

    //connecting
    one->nxt = two;
    two->nxt = NULL;

    Node * head = one;
    print(head);

}

