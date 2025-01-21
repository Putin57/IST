// Binary Tree
#include<bits/stdc++.h>
using namespace std;
 
struct Node{
    int data;
    Node *left;
    Node* right;
    Node (int d){
        left = right = NULL;
    }
};

int number_of_nodes(Node * root){
    if(root == NULL) return 0;
    int ln = number_of_nodes(root -> left);
    int rn = number_of_nodes(root -> right);
    return (ln+rn+1);
}

int height(Node * root){
    if(root == NULL) return -1;
    int ln = height(root -> left);
    int rn = height(root -> right);
    return max(ln, rn)+1;
}

int main()
{
    Node * root = new Node(0);
    root -> left = new Node(1);
    root -> right = new Node(2);
    root -> left = new Node(1);
    root -> left -> left = new Node(5);
    root -> left -> right = new Node(4);
    root -> right -> right = new Node(3);
    cout << "Number of Nodes: " << number_of_nodes(root) << "\n";
    cout << "Number of Height: " << height(root) << "\n";
 
    return 0;
}
