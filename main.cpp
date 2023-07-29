#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node *left,*right;
    Node(int data){
        this -> data = data;
        left=right=NULL;
    }
};

void inordertraversal(struct Node*Node)
{
    if(Node==NULL){
        return;
    }
    inordertraversal(Node->left);
    cout<<Node->data<<"->";

    inordertraversal(Node->right);
}

int main()
{
    struct Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    cout<<"\nInorder Traversal";
    inordertraversal(root);
}
