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

void insertathead(Node* &head ,int d){
    Node* temp = new Node(d);

    temp->nxt = head;
    head->prev = temp;
    head = temp;

}

void insertattail(Node* &tail , int d){

    Node* temp = new Node(d);
    tail->nxt = temp;
    temp->prev = tail;
    tail = temp;

}

void insetatposition(Node* &head , int d , int p){
    Node* temp = head;
    if(p ==1){
        insertathead(head , d);
        return;
    }
    else{
    
    Node* addnode = new Node(d);

    int cnt =1;
    while (cnt < p-1) {
        temp = temp->nxt;
        cnt++;
    }
    //four step process
    addnode->nxt = temp->nxt;
    temp->nxt->prev = addnode;
    temp->nxt = addnode;
    addnode->prev = temp;
    }
}

void print(Node* &head){
    Node* temp = head;

    while(temp!= NULL){
        cout << temp->data << " ";
        temp = temp->nxt;
    }
    cout << endl;
}

int getlength(Node* head){
    Node* temp = head;
    int cnt = 0;
    while(temp!= NULL){
        temp = temp->nxt;
        cnt++;
    }
    return cnt;
}

int main(){

    Node* one = new Node(10);
    Node* two = new Node(20);

    Node* head = one;
    Node* tail = two;
    one->nxt = two;
    two->prev = one;
    
    insertathead(head  , 11);
    print(head);

    insertattail(tail , 40);
    print(head);
    
    insetatposition(head , 50 , 1);
    print(head);
    
    cout << getlength(head) << endl;
}