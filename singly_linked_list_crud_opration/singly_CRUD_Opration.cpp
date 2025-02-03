#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class SinglyLinkedList {
private:
    Node* head;
    int size;

public:
    SinglyLinkedList() : head(nullptr), size(0) {}

    // Insert at the beginning
    void insertAtBeginning(int value) {
        Node* newNode = new Node{value, head};
        head = newNode;
        size++;
        cout << "Node inserted at the beginning successfully!\n";
    }

    // Insert at the end
    void insertAtEnd(int value) {
        Node* newNode = new Node{value, nullptr};
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        size++;
        cout << "Node inserted at the end successfully!\n";
    }

    // Insert at a specific position
    void insertAtPosition(int value, int position) {
        if (position < 1 || position > size + 1) {
            cout << "Invalid position!\n";
            return;
        }
        if (position == 1) {
            insertAtBeginning(value);
            return;
        }
        Node* newNode = new Node{value, nullptr};
        Node* temp = head;
        for (int i = 1; i < position - 1; ++i) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        size++;
        cout << "Node inserted at position " << position << " successfully!\n";
    }

    // Update a node value
    void update(int oldValue, int newValue) {
        Node* temp = head;
        bool found = false;
        while (temp != nullptr) {
            if (temp->data == oldValue) {
                temp->data = newValue;
                found = true;
                cout << "Node updated successfully!\n";
                break;
            }
            temp = temp->next;
        }
        if (!found) {
            cout << "Value not found in the list.\n";
        }
    }

    // Delete from the beginning
    void deleteFromBeginning() {
        if (head == nullptr) {
            cout << "List is empty.\n";
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
        size--;
        cout << "Node deleted from the beginning successfully!\n";
    }

    // Delete from the end
    void deleteFromEnd() {
        if (head == nullptr) {
            cout << "List is empty.\n";
            return;
        }
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
        } else {
            Node* temp = head;
            while (temp->next->next != nullptr) {
                temp = temp->next;
            }
            delete temp->next;
            temp->next = nullptr;
        }
        size--;
        cout << "Node deleted from the end successfully!\n";
    }

    // Delete from a specific position
    void deleteFromPosition(int position) {
        if (position < 1 || position > size) {
            cout << "Invalid position!\n";
            return;
        }
        if (position == 1) {
            deleteFromBeginning();
            return;
        }
        Node* temp = head;
        for (int i = 1; i < position - 1; ++i) {
            temp = temp->next;
        }
        Node* nodeToDelete = temp->next;
        temp->next = nodeToDelete->next;
        delete nodeToDelete;
        size--;
        cout << "Node deleted from position " << position << " successfully!\n";
    }

    // Get the size of the list
    int getSize() {
        return size;
    }

    // Display the list
    void display() {
        if (head == nullptr) {
            cout << "List is empty.\n";
            return;
        }
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    ~SinglyLinkedList() {
        Node* temp;
        while (head != nullptr) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    SinglyLinkedList list;
    int choice, value, position, oldValue, newValue;

    do {
        cout << "\nSingly Linked List Operations:\n";
        cout << "1. Insert at Beginning\n2. Insert at End\n3. Insert at Position\n";
        cout << "4. Update Element\n5. Delete from Beginning\n6. Delete from End\n";
        cout << "7. Delete from Position\n8. Size of List\n9. Display\n0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert at beginning: ";
                cin >> value;
                list.insertAtBeginning(value);
                break;
            case 2:
                cout << "Enter value to insert at end: ";
                cin >> value;
                list.insertAtEnd(value);
                break;
            case 3:
                cout << "Enter value to insert: ";
                cin >> value;
                cout << "Enter position to insert at: ";
                cin >> position;
                list.insertAtPosition(value, position);
                break;
            case 4:
                cout << "Enter value to update: ";
                cin >> oldValue;
                cout << "Enter new value: ";
                cin >> newValue;
                list.update(oldValue, newValue);
                break;
            case 5:
                list.deleteFromBeginning();
                break;
            case 6:
                list.deleteFromEnd();
                break;
            case 7:
                cout << "Enter position to delete: ";
                cin >> position;
                list.deleteFromPosition(position);
                break;
            case 8:
                cout << "Size of the list: " << list.getSize() << "\n";
                break;
            case 9:
                list.display();
                break;
            case 0:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 0);

    return 0;
}
