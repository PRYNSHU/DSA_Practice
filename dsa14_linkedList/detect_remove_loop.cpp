#include "bits/stdc++.h"
using namespace std;

class Node{
public:
    int data;
    Node *next;

    Node(int d){
        this->data =d;
        this->next = NULL;
    }
};

void print(Node* &head){

    Node* temp = head; //temp is created because after the loop ,
                        //its value become NULL
    while(temp !=NULL){
        cout << temp->data << " " ;
        temp = temp->next;
    }
    cout << endl;
}

void insertAtTail(Node* &tail, int d){

    Node * temp = new Node(d);
    tail->next = temp;
    tail  = temp;

}

bool detectloop(Node* head){

    if(head == NULL)
        return false;

    Node* temp = head;
    map<Node* , bool> visited;

    while(temp != NULL){

        if(visited[temp] == true)
        {cout << "present value "<< temp->data << endl;
            return true;}

        visited[temp]= true;
        temp = temp->next;

    }

    return false;

}
// a floydetectloop used slow and fast method and after looping(if present) , 
// meet again
    Node* floydetectloop(Node* head){

        if(head == NULL)
            return NULL;

        Node* slow = head;
        Node* fast = head;

        while(slow != NULL && fast != NULL){
            fast = fast->next;
            if(fast != NULL)
                fast = fast->next;

            slow = slow->next;

            if(slow == fast )
                return slow;
        }
        return NULL;
    }

Node* getstartingloop(Node* head){

    if(head == NULL)
        return NULL;

    Node * intersect = floydetectloop(head);
    Node * slow = head;
    while(slow != intersect){

        slow = slow->next;
        intersect = intersect->next;
    }
    return intersect;

}

void removeloop(Node * head){

    if(head == NULL)
        return;

    Node * startloop = getstartingloop(head);
    Node* temp = startloop;

    while(temp->next != startloop){
        temp = temp->next;
    }
    temp->next = NULL;
}

int main(){
    Node * one = new Node(10);
    Node * two = new Node(20);

    //connect it
    one->next = two;
    two->next = NULL;
    Node * head = one;

    Node* tail = two;
    insertAtTail(tail , 40);
    insertAtTail(tail , 50);

    tail->next = head->next; //looped here
    // print(head);
    removeloop(head);
    // print(head);
    if(floydetectloop(head) != NULL)
        cout << "have loop" << endl;
    else
        cout << "no loop" << endl;

    // Node* loop = getstartingloop(head);
    // cout << loop->data << endl;
    
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

}
