// Linked List (Insert, Display)
#include <bits/stdc++.h>
using namespace std;
 
struct node{
    int data;
    struct node* link;
};
struct node* root=NULL;
void add(){
    struct node* temp;
    temp=(struct node*) malloc(sizeof(struct node));
    cout << "Enter the data: ";
    cin >> temp->data;
    temp->link=NULL;
    if (root == NULL){
        root=temp;
    }
    else{
        struct node* aux;
        aux=root;
        while (aux->link!=NULL)
        {
            aux=aux->link;
        }
        aux->link=temp;
 
    }
}
 
void print(){
    struct node* temp;
    temp = root;
    if(temp==NULL){
        cout << "List is Empty\n";
    }
    else{
        while(temp!=NULL){
            cout << temp->data << "-->";
            temp=temp->link;
        }
        cout << '\n';
        cout << '\n';
    }
}
int main(){
    add();
    print();
    int i = 1;
    cout << "Do you want to add another value?" << '\n';
    cout <<"1. YES\n";
    cout << "2. NO\n";
    cin >> i;
 
    while(i==1){
        add();
        print();
        cout << "Do you want to add another value?" << '\n';
        cout <<"1. YES\n";
        cout << "2. NO\n";
        cin >> i;
    } 
    return 0;
}
