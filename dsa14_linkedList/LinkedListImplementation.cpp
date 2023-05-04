#include "bits/stdc++.h"
using namespace std;

/*
Defination -> A linked list is a linear data structure, 
in which the elements are not stored at contiguous memory locations. 
The elements in a linked list are linked using pointers
*/

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
//linked list using recursion

void printlink(Node* head){
  //base cond
  if(head == NULL)
    return ;
  cout << head->value << " ";
  return printlink(head->next);

}

int main() {

  //allocate 3 nodes in the heap memory (dynamic memory allocation) & 
  //also can assigned the values by para const.

  //objects or nodes are formed
  Node* one = new Node();
  Node* two = new Node();
  Node* three = new Node();

  // Assign value values
  // (*one).value = 1;
  one->value =1;
  two->value = 2;
  three->value = 3;

  // Connect nodes
  // (*one).next = two;
  one->next = two;
  two->next = three;
  three->next = NULL;
  Node* head = one;

  //IMP -> one , two , three are all pointers of Node class data type
  //pointing to heap memory.
  int *p = new int;
  cout << "p " << p << endl;
  cout << one->value << " " << one->next << " "<<  two << endl;
  
  // print the linked list value
//   while (head != NULL) {
//     cout << head->value << " ";
//     head = head->next;
//   }
  printlink(head);
}

///////////////////////////////////////////////

/*
class Node{
    public:
        int data;
        Node * nxt;

    //cons 
    Node(int d){
        this->data = d;
        this->nxt = NULL;
    }
};

int main(){
    //creating the nodes
    Node * one = new Node(10);
    Node * two = new Node(20);

    //connecting the nodes
    one->nxt = two;
    two->nxt = NULL;
    Node * head = one;

    //print ithe node
    while(head != NULL){
        cout << head->data << " ";
        head = head->nxt;
    }

}
*/

