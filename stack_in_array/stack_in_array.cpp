#include <iostream>
using namespace std;

class Stack {
private:
    int* arr;
    int top;
    int capacity;

public:
    Stack(int size) {
        arr = new int[size];
        capacity = size;
        top = -1;
    }

    ~Stack() {
        delete[] arr; 
    }

    void push(int value) {
        if (isFull()) {
            cout << "Stack Overflow! Increasing capacity dynamically..." << endl;;
            increaseCapacity();
        }
        arr[++top] = value;
        cout << value << " pushed to stack." << endl;;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow!" << endl;;
            return -1;
        }
        int poppedValue = arr[top--];
        return poppedValue;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;;
            return -1;
        }
        return arr[top];
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;;
            return;
        }
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == capacity - 1;
    }

    int size() {
        return top + 1;
    }

    void increaseCapacity() {
        int newCapacity = capacity * 2;
        int* newArr = new int[newCapacity];
        for (int i = 0; i < capacity; i++) {
            newArr[i] = arr[i];
        }
        delete[] arr;
        arr = newArr;
        capacity = newCapacity;
        cout << "Capacity increased to " << capacity << "" << endl;;
    }
};

int main() {
    int choice, size;

    cout << "Enter initial stack capacity: ";
    cin >> size;

    Stack stack(size);

    do {
        cout << "\nMenu:" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek " << endl;
        cout << "4. Display" << endl;
        cout << "5. Check if Stack is Empty" << endl;
        cout << "6. Check if Stack is Full" << endl;
        cout << "7. Get Stack Size" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int value;
                cout << "Enter value to push: ";
                cin >> value;
                stack.push(value);
                break;
            }
            case 2: {
                int poppedValue = stack.pop();
                if (poppedValue != -1) {
                    cout << "Popped value: " << poppedValue << "" << endl;;
                }
                break;
            }
            case 3: {
                int topValue = stack.peek();
                if (topValue != -1) {
                    cout << "Top element: " << topValue << "" << endl;;
                }
                break;
            }
            case 4:
                stack.display();
                break;
            case 5:
                cout << (stack.isEmpty() ? "Stack is Empty" : "Stack is not Empty") << "" << endl;;
                break;
            case 6:
                cout << (stack.isFull() ? "Stack is Full" : "Stack is not Full") << "" << endl;;
                break;
            case 7:
                cout << "Stack size: " << stack.size() << "" << endl;;
                break;
            case 0:
                cout << "Exiting..." << endl;;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;;
        }
    } while (choice != 0);

    return 0;
}
