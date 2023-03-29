#include "bits/stdc++.h"
using namespace std;

// Linked list implementation
// Creating a node
class Node {
   public:
    int value; //data 
    Node *next; //node data type ka pointer

  //can also be done by para. const.
  // Node(int val){
  //   // (*this).value = val;
  //   this->value = val;
  //   this->next = NULL;
  // }
  
};

int main() {

  Node* head;
  Node* one = NULL;
  Node* two = NULL;
  Node* three = NULL;

  // allocate 3 nodes in the heap (dynamic memory allocation) & 
  //also assigning the values by para const.
  one = new Node();
  two = new Node();
  three = new Node();

  // Assign value values
  // (*one).value = 1;
  one->value = 1;
  two->value = 2;
  three->value = 3;

  // Connect nodes
  // (*one).next = two;
  one->next = two;
  two->next = three;
  three->next = NULL;
  
  //IMP -> one , two , three are all pointers of Node class data type
  //pointing to heap memory.
  int *p = new int;
  cout << "p" << p << endl;
  cout << one->value << " " << one->next << " "<<  two << endl;
  
  // print the linked list value
  head = one;
  while (head != NULL) {
    cout << head->value << " ";
    head = head->next;
  }
}


///////////////////////////////////////////////

/*
class Node{
    public:
    int data;
    Node *nxt;
};

int main(){

    //node define
    Node *head;
    Node * node1 = new Node;
    Node * node2 = new Node;
    Node * node3 = new Node;

    //value assign 
    node1->data = 4;
    node2->data = 5;
    node3->data = 6;

    //connecting the nodes
    node1->nxt = node2;
    node2->nxt = node3;
    node3->nxt = NULL;

    cout << "print the node" << endl;
    head = node1;
    while(head != NULL){
        cout << head->data << " ";
        head = head->nxt;
    }
    
}*/

