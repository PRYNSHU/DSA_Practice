/*#include "iostream"
using namespace std;

class Node{
    public:
    int value;
    Node *next;

    Node(int val){
        this->value = val;
        this->next = NULL;
    }
};

// void insertAtHead(Node * &head , int d){
//     Node *temp = new Node(d);
//     temp->next = head;
//     head = temp;
// }

int main(){
    Node *node1 = new Node(10);
    Node *node2 = new Node(20);
    Node *node3 = new Node(30);

    //connecting the nodes;
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;
    
    cout << node1->value << " " << node1->next << endl;

    //printing
    Node *head = node1;
    while(head != NULL){
        cout << head->value << " ";
        head = head->next;
    }cout << endl;

    cout << node3->next << endl;
    cout << "all ohk";

}*/

#include<iostream>
using namespace std;

class Node {

    public:
    int data;
    Node* next;

    //constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head, int d) {

    // new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d) {
     // new node create
    Node* temp = new Node(d);
    tail -> next = temp;
    tail  = temp;
}

void insertAtPosition(Node* &tail, Node* & head, int position, int d) {


    //insert at Start
    if(position == 1) {
        insertAtHead(head, d);
        return;
    }

    Node* temp  = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp->next;
        cnt++;
    }

    //inserting at Last Position
    if(temp -> next == NULL) {
        insertAtTail(tail,d);
        return ;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;

    temp -> next = nodeToInsert;
}

void deleteNode(int position, Node* & head) { 

    //deleting first or start node
    if(position == 1) {
        Node* temp = head;
        head = head -> next;
        //memory free start ndoe
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next  = NULL;
        delete curr;

    }
}

bool isCircularList(Node* head) {
    //empty list
    if(head == NULL) {
        return true;
    }

    Node* temp = head -> next;
    while(temp != NULL && temp != head ) {
        temp = temp -> next;
    }

    if(temp == head ) {
        return true;
    }

    return false;
}


// bool detectLoop(Node* head) {
//     if(head == NULL)
//         return false;

//     map<Node*, bool> visited;

//     Node* temp = head;

//     while(temp !=NULL) {

//         //cycle is present
//         if(visited[temp] == true) {
//             cout << "Present on element " << temp->data << endl;
//             return true;
//         }

//         visited[temp] = true;
//         temp = temp -> next;

//     }
//     return false;

// }

Node* floydDetectLoop(Node* head) {

    if(head == NULL)
        return NULL;

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast !=NULL) {
        
        fast = fast -> next;
        if(fast != NULL) {
            fast = fast -> next;
        }

        slow = slow -> next;

        if(slow == fast) {
            cout << "present at " << slow -> data << endl;
            return slow;
        }
    }

    return NULL;

}

Node* getStartingNode(Node* head) {

    if(head == NULL) 
        return NULL;

    Node* intersection = floydDetectLoop(head);
    Node* slow = head;

    while(slow != intersection) {
        slow = slow -> next;
        intersection = intersection -> next;
    }  

    return slow;

}

void removeLoop(Node* head) {

    if( head == NULL)
        return;

    Node* startOfLoop = getStartingNode(head);
    Node* temp = startOfLoop;

    while(temp -> next != startOfLoop) {
        temp = temp -> next;
    } 

    temp -> next = NULL;

}


void print(Node* &head) {

    // if(head == NULL) {
    //     cout << "List is empty "<< endl;
    //     return ;
    // }
    //Node* temp = head;

    while(head != NULL ) {
        cout << head -> data << " ";
        head = head -> next;
    }
    cout << endl;
}

int main() {
    Node* node1 = new Node(10);
    Node *head = node1;

    print(head);
    insertAtHead(head , 22);
    print(head);

    cout << "all ohk";

}