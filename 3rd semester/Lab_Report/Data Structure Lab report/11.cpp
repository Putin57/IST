// 11. Write a program to implement all operations in queue (insertion and deletion)
/*
|-----------------------------------------|
|Algorithm (Insertion):                   |
|Procedure Enqueue(queue, value)          |
|    If rear >= N - 1 Then                |
|        Print "Queue Overflow"           |
|        Exit                             |
|    End If                               |                          
|                                         |
|    If front == -1 Then                  |
|        front := 0                       |
|    End If                               |    
|    rear := rear + 1                     |
|    queue[rear] := value                 |
|   Print "Value enqueued"                |
|End Procedure                            |
|-----------------------------------------|
|Algorithm (Deletion):                    |
|Procedure Dequeue(queue)                 |
|    If front == -1 Or front > rear Then  |
|        Print "Queue Underflow"          |
|       Exit                              |        
|    End If                               |
|                                         |
|    dequeued_value := queue[front]       |
|    Print dequeued_value, "dequeued"     |
|                                         |    
|    front := front + 1                   |
|                                         |
|    If front > rear Then                 |
|        front := -1                      |
|        rear := -1                       |
|    End If                               |
|End Procedure                            |
|-----------------------------------------|
*/

#include <iostream>
using namespace std;

const int N = 100;
int queue[N], front = -1, rear = -1;

void enqueue(int value){
    if(rear>=N-1)cout<<"Queue Overflow!\n";
    else queue[++rear]=(front==-1?front=0,value:value),cout<<value<<" enqueued.\n";
}

void dequeue(){
    if(front==-1 or front>rear)cout<<"Queue Underflow!\n";
    else cout<<queue[front++]<<" dequeued.\n",(front>rear?front=rear=-1:0);
}

void display(){
    if(front==-1 or front>rear)cout<<"Queue is empty.\n";
    else cout <<"The element is: ";for(int i=front;i<=rear;i++)cout<<queue[i]<<' ';
    cout<<'\n';
}

int main(){
    int choice,value;
    while (true){
        cout<<"\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\nChoice: ";
        cin>>choice;
        if(choice==1){cout<<"Enter the value: ";cin>>value,enqueue(value);}
        else if(choice==2)dequeue();
        else if(choice==3)display();
        else if(choice==4)break;
        else cout<<"Invalid choice!\n";
    }
    return 0;
}


/*
|-----------------------|
|Time complexity:       |
|  i)Enque: O(1);       |
|  ii) dequq: O(1)      |
|  iii) Display: O(n)   |
|                       |
|space complexity: O(N) |
----------------------- |
*/
