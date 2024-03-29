#include "bits/stdc++.h"
using namespace std;

//creating the Node
class Node{
public:
    int data;
    Node *next;

    Node(int d){
        this->data =d;
        this->next = NULL;
    }
};

void insetAtHead(Node* &head , int d){
    //create new node
    Node *temp = new Node(d);

    //connecting the head
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){

    Node * temp = new Node(d);
    tail->next = temp;
    tail  = temp;

}

void print(Node* &head){

    Node* temp = head; //temp is created because after the loop ,
                        //its value become NULL
    while(temp !=NULL){
        cout << temp->data << " " ;
        temp = temp->next;
    }
    cout << endl;
}

void insetAtPost(Node * &head, int p , int d ){

    //move till that position
    Node * temp = head;
    int cnt =1;
    while(cnt <p -1){
        temp = temp->next;
        cnt++;
    }
    cout << "tempfinal " << temp->next << " " << temp->data << endl;

    //attachment
    Node * nodeMid = new Node(d);
    nodeMid->next = temp->next;
    temp->next = nodeMid;
}

void deleteNode(Node* &head , int p){
    Node* temp = head;
    //for starting node
    if(p == 1){

        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else{
    //take temp to that position
    
    int cnt =1;
    while(cnt < p -1){
        temp = temp->next;
        cnt++;
    }

    // deleting
    //attaching to nxt node
    Node* curr = temp->next;
    temp->next = curr->next;

    //memory free
    curr->next = NULL;
    delete curr;
    }
    
}


bool pal(vector<int> arr){
        
        int s = 0;
        int e = arr.size() -1;
        
        while(s>= e){
            if(arr[s] != arr[e])
                return 0;
        }
        
        return 1;
    }
    
    bool isPalindrome(Node *head)
    {
        Node* temp = head;
        vector<int> arr;
        
        while(temp!= NULL){
            arr.push_back(temp->data);
            temp = temp->next;
        }
        
        return pal(arr);
    }
int main(){
    Node * one = new Node(10);
    Node * two = new Node(20);

    //connect it
    one->next = two;
    two->next = NULL;
    Node * head = one;
    
    print(head);
    insetAtHead(head , 30);

    Node* tail = two;
    insertAtTail(tail , 40);

    print(head);
    insetAtPost(head , 4 , 100);
    print(head);

    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    deleteNode(head , 1);
    print(head);

    cout << isPalindrome(head);

}