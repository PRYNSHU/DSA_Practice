#include "bits/stdc++.h"
using namespace std;
/*
void tobinary(){
    int n =8;
    //n to binary
    int ans =0, rem;
    int i =1;

    while(n>0){
        rem = n&1;
        ans = rem * i + ans;
        i = i*10;
        //both are same
        // n = n>>1;
        n = n/2;
    }

    cout << ans;
}

int main(){

    // tobinary();
    int a = 5;
    int b = -5;
    cout << (abs(a) + abs(b));


}
*/

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
/* Link list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node *start = NULL;


// } Driver Code Ends
/*
 
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        set<int> st;
        Node* temp = head;
        while(temp != NULL){
            
            st.insert(temp->data);
            temp = temp->next;
        }
        
        Node* add = head;
        for(auto it = st.begin(); it!= st.end();it++){
            
            add->data = *it;
            add = add->next;
        }
        
        return head;
        
    }
};


//{ Driver Code Starts.

// Function to sort a linked list of 0s, 1s and 2s
void printList(struct Node *Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
void insert(int n1) {
    int n, value, i;
    // scanf("%d",&n);
    n = n1;
    struct Node *temp;
    for (i = 0; i < n; i++) {
        scanf("%d", &value);

        if (i == 0) {
            start = new Node(value);
            temp = start;
            continue;
        } else {
            temp->next = new Node(value);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}

int main() {

    int n;

    int t;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        insert(n);
        Solution ob;
        struct Node *newHead = ob.segregate(start);
        printList(newHead);
    }

    return 0;
}
// } Driver Code Ends