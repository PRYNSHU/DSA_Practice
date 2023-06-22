#include <bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }

};

node* buildtree(node* root){

    int data;
    cin >> data;
    root = new node(data);

    if(data == -1)
        return NULL;

    cout << "enter on left side of " << data << endl;
    root->left = buildtree(root->left);

    cout << "enter on right side of " << data << endl;
    root->right = buildtree(root->right);
    return root;

}

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL); //seperator

    while(!q.empty()){

        node* temp = q.front();
        q.pop();

        //seperator section
        if(temp == NULL){
            cout << endl;

            if(!q.empty()){
                q.push(NULL);
            }
 
        }else{
            cout << temp->data << " ";

            if(temp->left){
            q.push(temp->left);
            }
            if(temp->right){
            q.push(temp->right);
            }
        }

    }
}

void InOrder(node* root){

    if(root == NULL)
        return ;

    //L N R
    InOrder(root->left);
    cout << root->data << " ";
    InOrder(root->right);

}

void PreOrder(node * root){

    if(root == NULL)
        return ;

    //N L R
    cout << root->data << " ";
    PreOrder(root->left);
    PreOrder(root->right);

}

void PostOrder(node* root){

    if(root == NULL)
        return ;

    //L R N
    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->data << " ";
}

int main(){

cout << "Binary Tree" << endl;
node* root = NULL;
//data 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
root = buildtree(root);

levelOrderTraversal(root);

InOrder(root);

cout << endl;
PreOrder(root);

cout << endl;
PostOrder(root);

}