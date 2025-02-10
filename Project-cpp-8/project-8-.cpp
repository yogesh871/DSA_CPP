
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    
   
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class DynamicMemoryAllocation {
private:
    Node* head;

public:
   
    DynamicMemoryAllocation() {
        head = nullptr;
    }

   
    void insert_at_beginning(int data) {
        Node* new_node = new Node(data); 
        new_node->next = head;           
        head = new_node;                
        cout << "Node with value " << data << " inserted at the beginning." << endl;
    }

    
    bool search(int key) {
        Node* temp = head; 
        while (temp != nullptr) {
            if (temp->data == key) {
                return true; 
            }
            temp = temp->next; 
        }
        return false; 
    }

    
    void delete_node(int key) {
        if (head == nullptr) {
            cout << "List is empty. Nothing to delete." << endl;
            return;
        }
        
         
        if (head->data == key) {
            Node* temp = head;
            head = head->next;  
            delete temp;        
            cout << "Node with value " << key << " deleted." << endl;
            return;
        }

        Node* temp = head;
     
        while (temp->next != nullptr && temp->next->data != key) {
            temp = temp->next;
        }

          if (temp->next != nullptr) {
            Node* node_to_delete = temp->next;
            temp->next = temp->next->next; 
            delete node_to_delete;         
            cout << "Node with value " << key << " deleted." << endl;
        } else {
            cout << "Node with value " << key << " not found." << endl;
        }
    }

   
    void reverse() {
        Node* prev = nullptr;
        Node* current = head;
        Node* next_node = nullptr;

        while (current != nullptr) {
            next_node = current->next; 
            current->next = prev;      
            prev = current;            
            current = next_node;
        }
        head = prev; 
        cout << "List reversed." << endl;
    }

    
    void display() {
        if (head == nullptr) {
            cout << "List is empty." << endl;
            return;
        }

        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "nullptr" << endl; 
    }


    ~DynamicMemoryAllocation() {
        Node* temp;
        while (head != nullptr) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    DynamicMemoryAllocation list;
    int choice, value;

    do {

        cout << "\nMenu:" << endl;
        cout << "1. Insert at Beginning" << endl;
        cout << "2. Search for an Element" << endl;
        cout << "3. Delete a Node" << endl;
        cout << "4. Reverse the List" << endl;
        cout << "5. Display the List" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: 
                cout << "Enter value to insert at the beginning: ";
                cin >> value;
                list.insert_at_beginning(value);
                break;

            case 2: 
                cout << "Enter value to search: ";
                cin >> value;
                if (list.search(value)) {
                    cout << "Element " << value << " found in the list." << endl;
                } else {
                    cout << "Element " << value << " not found in the list." << endl;
                }
                break;

            case 3: 
                cout << "Enter value to delete: ";
                cin >> value;
                list.delete_node(value);
                break;

            case 4: 
                list.reverse();
                break;

            case 5:
                cout << "Current List: ";
                list.display();
                break;

            case 6: 
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 6);

    return 0;
}
