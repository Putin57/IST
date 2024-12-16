// 10. Write a program to implement all operation in stack (insertion and deletion).
/*
|-------------------------------------------------------|
|Algorithm (Insertion):                                 |
|Procedure PUSH(stack, N, top, value)                   |
|    IF top >= N - 1 THEN                               |
|        PRINT "Stack Overflow! Cannot push value."     |
|        RETURN                                         |
|    END IF                                             |
|    top := top + 1                                     |
|    stack[top] := value                                |
|    PRINT value + " pushed into the stack."            |
|END Procedure                                          |
|-------------------------------------------------------|
|Algorithm (Deletion):                                  |
|Procedure POP(stack, top)                              |
|    IF top < 0 THEN                                    |
|        PRINT "Stack Underflow! Cannot pop an element."|
|        RETURN                                         |
|    END IF                                             |
|    value := stack[top]                                |
|    top := top - 1                                     |
|    PRINT value + " popped from the stack."            |
|END Procedure                                          |
|-------------------------------------------------------|
*/

#include <iostream>
using namespace std;

const int N = 100;
int stack[N];
int top = -1;
void push(int value) {
    if (top >= N - 1) {
        cout << "Stack Overflow! Cannot push " << value << ".\n";
        return;
    }
    top++;
    stack[top] = value;
    cout << value << " pushed into the stack.\n";
}
void pop() {
    if (top < 0) {
        cout << "Stack Underflow! Cannot pop an element.\n";
        return;
    }
    cout << stack[top] << " popped from the stack.\n";
    top--;
}
void display() {
    if (top < 0) {
        cout << "Stack is empty.\n";
        return;
    }
    cout << "Stack elements are:\n";
    for (int i = top; i >= 0; i--) cout << stack[i] << '\n';
}
int main() {
    int choice, value;
    while (true) {
        cout << "\n1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 1) {
            cout << "Enter the value to push: ";
            cin >> value;
            push(value);
        } else if (choice == 2) pop();
        else if (choice == 3) display();
        else if (choice == 4) {
            cout << "Exiting...\n";
            break;
        } else cout << "Invalid choice! Please try again.\n";
    }
    return 0;
}


/*
|-------------------------|
|Time Complexity:         |
|    i) push: O(1)        |
|    ii) pop: O(1)        |
|    iii) peek:O(1)       |
|    iv)search:O(n)       |
|                         |
|space complexity: O(n)   |
|-------------------------|
*/
