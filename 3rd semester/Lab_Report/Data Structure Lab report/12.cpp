// 12. Write a program to traverse a binary tree in any order.

/*
-------------------------------------------------------------------------------------------------
Algorithm:  
[N:B: A binary tree can be traversed in three primary orders: In-order, Pre-order, Post-order.
but there is None of them mention in the question. 
So, No Mention means, No Algorithm. now, keep smile and happy coding ^_^]
------------------------------------------------------------------------------------------------
*/

// In-order(left, root, right)
#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node *left,*right;
    Node(int val):data(val),left(nullptr),right(nullptr){}
};
void traverse(Node* root) {
    if(!root)return;
    traverse(root->left);          
    cout<<root->data<<' ';
    traverse(root->right);         
}
int main(){
    Node*root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    traverse(root); 
    return 0;
}
