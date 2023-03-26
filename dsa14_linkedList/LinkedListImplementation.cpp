#include "bits/stdc++.h"
using namespace std;

// Linked list implementation
// Creating a node
class Node {
   public:
    int value; //data 
    Node *next; //node data type ka pointer

  Node(int val){
    // (*this).value = val;
    this->value = val;
    this->next = NULL;
  }
};

int main() {

  Node* head;
  //Node* one = NULL;
  Node* two = NULL;
  Node* three = NULL;

  // allocate 3 nodes in the heap (dynamic memory allocation) & 
  //also assigning the values by para const. 
  Node *one = new Node(1);
  two = new Node(2);
  three = new Node(4);

  // Assign value values
  // (*one).value = 1;
  // one->value = 1;
  // two->value = 2;
  // three->value = 3;

  // Connect nodes
  // (*one).next = two;
  one->next = two;
  two->next = three;
  three->next = NULL;

  cout << one->value << " " << one->next << " "<<  two << endl;
  // print the linked list value
  head = one;
  while (head != NULL) {
    cout << head->value << " ";
    head = head->next;
  }
}

