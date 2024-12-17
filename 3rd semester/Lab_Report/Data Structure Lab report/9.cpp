// 9. Write a program to implement all operation in a Linked list (insertion and deletion).
/*
|-------------------------------------------------------------------------|
|Algorithm (Insertion):                                                   |
|INSFIRST(INFO, LINK, START, AVAIL, ITEM)                                 |
|1. [OVERFLOW?]If AVAIL = NULL, then: Write: OVERFLOW, and Exit.          |
|2. [Remove first node from AVAIL list.]                                  |
|   set NEW := AVAIL and AVAIL := LINK[AVAIL]                             |
|3. Set INFO[NEW]:=ITEM.[Copies new data into new node]                   |
|4. Set LINK[NEW]:= START. [New node now points to original first node.]  |
|5. Set START := NEW.[Changes START so it points to the new node.]        |
|6. Exit.                                                                 |
|-------------------------------------------------------------------------|
|Algorithm (Deletion):                                                    |
|DEL(INFO, LINK, START, AVAIL, LOC, LOCP)                                 |
|1. If LOCP=NULL, then:                                                   |
|        set START := LINK[START]. [Delete first node.]                   |
|   Else:                                                                 |
|      Set LINK[LOCP]:= LINK[LOC]. [Deletes node N.]                      |
|   [End of If structure.]                                                |
|2. [Return delete node to the AVAIL list.]                               |
|   Set LINK[LOC]:= AVAIL and AVAIL:=LOC.                                 |
|3. Exit.                                                                 |
|-------------------------------------------------------------------------|

*/

#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node*link;
};
struct node*root=NULL;

void add(){
    struct node*temp=(struct node*) malloc(sizeof(struct node));
    cout<<"Enter the data: ";cin>>temp->data;
    temp->link=NULL;
    if(root==NULL)root=temp;
    else{
        struct node*aux=root;
        while(aux->link!=NULL)aux=aux->link;
        aux->link=temp;
    }
}

void print(){
    struct node*temp=root;
    if(temp==NULL){
        cout<<"List is Empty\n";
        return;
    }
    while(temp!=NULL){
        cout<<temp->data<<" --> ";
        temp=temp->link;
    }
    cout<<"NULL\n\n";
}

void deleteNode(int value) {
    if(root==NULL){
        cout<<"List is empty. Nothing to delete.\n";
        return;
    }
    if(root->data==value){
        struct node*temp=root;
        root=root->link;
        free(temp);
        cout<<"Node with value "<<value<<" deleted.\n";
        return;
    }
    struct node*temp=root;
    while(temp->link!=NULL and temp->link->data!=value)temp=temp->link;
    if(temp->link==NULL)cout<<"Value "<<value<<" not found in the list.\n";
    else{
        struct node*toDelete=temp->link;
        temp->link=toDelete->link;
        free(toDelete);
        cout<<"Node with value "<<value<<" deleted.\n";
    }
}

int main(){
    int choice;
    do{
        cout<<"1. Add\n2. Print\n3. Delete\n4. Exit\nEnter your choice: ";cin>>choice;
        if(choice==1)add();
        else if(choice==2)print();
        else if(choice==3){
            cout<<"Enter the value to delete: ";
            int value;cin>>value;
            deleteNode(value);
        } else if(choice==4)cout<< "The End...\n";
        else cout<< "Invalid choice. Try again.\n";
    }while(choice!=4);
    return 0;
}


/*
-----------------------
time complexity: O(n)
space complexity: O(1)
-----------------------
*/
