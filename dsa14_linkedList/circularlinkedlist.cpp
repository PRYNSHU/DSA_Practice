#include "bits/stdc++.h"
using namespace std;

class Node{
    public:
        int data;
        Node* nxt;

    Node(int d){
        this->data = d;
        this->nxt = NULL;
    }
    //destructor
    ~Node(){
        if(this->nxt !=NULL){
            delete nxt;
            nxt = NULL;
        }
    }
};

void insertnode(Node* &tail ,int element , int d){

    //assuming the ele is present
    if(tail == NULL){
        Node* newnode = new Node(d); //new node created
        tail = newnode;             //tail pointing to newnode
        newnode->nxt = newnode;    // loop forming
    }else{
        Node* curr = tail;
        while (curr->data != element){
            curr = curr->nxt;
        }

        Node* temp = new Node(d);
        temp->nxt = curr->nxt;
        curr->nxt = temp;

    }

}
void print(Node* &tail){

    Node* temp = tail; //storing the address of tail in temp ,to compare it
    do{
        cout << tail->data << " ";
        tail = tail->nxt;
    }while (tail != temp);
    cout << endl;
    
}

int main(){

//here we use tail , rather head
    Node* tail = NULL;
    insertnode(tail , 5 , 3);
    print(tail);

    insertnode(tail , 3 ,6);
    print(tail);

}