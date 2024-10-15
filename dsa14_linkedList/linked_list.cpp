#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor for Node with data and next node
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    // Constructor for Node with 
    //only data (next set to nullptr)
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

// Function to print the linked list
void printLL(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

// Function to delete the Nth node
// from the end of the linked list
Node* DeleteNthNodefromEnd(Node* head, int N) {
    if (head == NULL) {
        return NULL;
    }
    int cnt = 0;
    Node* temp = head;

    // Count the number of nodes in the linked list
    while (temp != NULL) {
        cnt++;
        temp = temp->next;
    }

    // If N equals the total number of
    // nodes, delete the head
    if (cnt == N) {
        Node* newhead = head->next;
        delete (head);
        return newhead;
    }

    // Calculate the position of the node to delete (res)
    int res = cnt - N-1;
    temp = head;

    // Traverse to the node just before the one to delete
    // while (temp != NULL) {
    //     res--;
    //     cout << res << " ";
    //     if (res == 0) {
    //         break;
    //     }
    //     temp = temp->next;
    // }

    while(res--){
        cout << res << " ";
        temp = temp->next;
        
    }
    cout << "temp "<< temp->data << endl;

    // Delete the Nth node from the end
    Node* delNode = temp->next;
    temp->next = temp->next->next;
    delete (delNode);
    return head;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int N = 2;
    Node* head = new Node(arr[0]);
    head->next = new Node(arr[1]);
    head->next->next = new Node(arr[2]);
    head->next->next->next = new Node(arr[3]);
    head->next->next->next->next = new Node(arr[4]);

    printLL(head); cout << endl;
    // Delete the Nth node from the end
    // and print the modified linked list
    head = DeleteNthNodefromEnd(head, N);
    printLL(head);
}


