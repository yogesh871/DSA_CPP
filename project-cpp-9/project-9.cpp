#include <iostream>
using namespace std;

class Stack {
protected:
    int* arr;  
    int indexTop;
    int capacity;

public:
    Stack(int size) {  
        capacity = size;
        arr = new int[capacity];
        indexTop = -1;
    }
    
    virtual ~Stack() {  
        delete[] arr;
    }
    
    virtual void push(int value) {  
        if (!isFull()) {
            arr[++indexTop] = value;
            cout << "Pushed " << value << " in the stack " << endl;
        } else {
            cout << "Stack is full." << endl;
        }
    }
    
    virtual int pop() {
        if (!isEmpty()) {
            cout << "Popped " << arr[indexTop] << " in the stack." << endl;
            return arr[indexTop--];
        } else {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }
    
    virtual int top() {
        if (!isEmpty()) {
            cout << "Top element: " << arr[indexTop] << endl;
            return arr[indexTop];
        } else {
            cout << "Stack is empty." << endl;
            return -1;
        }
    }
    
    bool isEmpty() {
        return indexTop == -1;
    }
    
    bool isFull() {
        return indexTop == capacity - 1;
    }

        void display() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return;
        }
        
        cout << "Stack elements: ";
        for (int i = 0; i <= indexTop; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};



void stackinfo(Stack* stackObj) {
    int choice, value;
    do {
       
       cout << "press 1 for push " << endl;
        cout << "press 2 for pop " << endl;
        cout << "press 3 for top " << endl;
        cout << "press 4 for check empty " << endl;
        cout << "press 5 for check full" << endl;
        cout << "press 6 for display " << endl;
        cout << "press 7 for Exit " << endl;
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                stackObj->push(value);
                break;
            case 2:
                stackObj->pop();
                break;
            case 3:
                stackObj->top();
                break;
            case 4:
                cout << (stackObj->isEmpty() ? "Stack is empty." : "Stack is not empty.") << endl;
                break;
            case 5:
                cout << (stackObj->isFull() ? "Stack is full." : "Stack is not full.") << endl;
                break;
            case 6:
                   stackObj->display();
                break;
            case 0:
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    } while (choice != 0);
}

int main() {
    int size;
    cout << "Enter stack size: ";
    cin >> size;
    
    Stack stack(size);
    stackinfo(&stack);

    return 0;
}
