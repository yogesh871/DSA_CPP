
#include <iostream>
using namespace std;

<<<<<<< HEAD
=======
// Node class representing each node in the linked list
>>>>>>> f4a4279db2b0cce0ded66c9be7d62fea249e0c95
class Node {
public:
    int data;
    Node* next;
    
<<<<<<< HEAD
   
=======
    // Constructor to initialize the node with data and next as null
>>>>>>> f4a4279db2b0cce0ded66c9be7d62fea249e0c95
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

<<<<<<< HEAD
class DynamicMemoryAllocation {
private:
    Node* head;

public:
   
=======
// DynamicMemory class to handle operations on the linked list
class DynamicMemoryAllocation {
private:
    Node* head; // Head of the linked list

public:
    // Constructor to initialize the linked list with an empty head
>>>>>>> f4a4279db2b0cce0ded66c9be7d62fea249e0c95
    DynamicMemoryAllocation() {
        head = nullptr;
    }

<<<<<<< HEAD
   
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

    
=======
    // Method to insert a node at the beginning of the linked list
    void insert_at_beginning(int data) {
        Node* new_node = new Node(data); // Dynamically allocate memory for new node
        new_node->next = head;           // Make the new node point to the current head
        head = new_node;                 // Update head to the new node
        cout << "Node with value " << data << " inserted at the beginning." << endl;
    }

    // Method to search for a node with a specific value
    bool search(int key) {
        Node* temp = head; // Start from the head
        while (temp != nullptr) {
            if (temp->data == key) {
                return true; // If key found
            }
            temp = temp->next; // Move to the next node
        }
        return false; // If key not found
    }

    // Method to delete a node with a specific value
>>>>>>> f4a4279db2b0cce0ded66c9be7d62fea249e0c95
    void delete_node(int key) {
        if (head == nullptr) {
            cout << "List is empty. Nothing to delete." << endl;
            return;
        }
        
<<<<<<< HEAD
         
        if (head->data == key) {
            Node* temp = head;
            head = head->next;  
            delete temp;        
=======
        // If the node to delete is the head node
        if (head->data == key) {
            Node* temp = head;
            head = head->next;  // Move head to the next node
            delete temp;        // Free the memory of the old head
>>>>>>> f4a4279db2b0cce0ded66c9be7d62fea249e0c95
            cout << "Node with value " << key << " deleted." << endl;
            return;
        }

        Node* temp = head;
<<<<<<< HEAD
     
=======
        // Traverse the list to find the node to delete
>>>>>>> f4a4279db2b0cce0ded66c9be7d62fea249e0c95
        while (temp->next != nullptr && temp->next->data != key) {
            temp = temp->next;
        }

<<<<<<< HEAD
          if (temp->next != nullptr) {
            Node* node_to_delete = temp->next;
            temp->next = temp->next->next; 
            delete node_to_delete;         
=======
        // If the node to delete is found
        if (temp->next != nullptr) {
            Node* node_to_delete = temp->next;
            temp->next = temp->next->next;  // Bypass the node
            delete node_to_delete;          // Free the memory of the deleted node
>>>>>>> f4a4279db2b0cce0ded66c9be7d62fea249e0c95
            cout << "Node with value " << key << " deleted." << endl;
        } else {
            cout << "Node with value " << key << " not found." << endl;
        }
    }

<<<<<<< HEAD
   
=======
    // Method to reverse the linked list
>>>>>>> f4a4279db2b0cce0ded66c9be7d62fea249e0c95
    void reverse() {
        Node* prev = nullptr;
        Node* current = head;
        Node* next_node = nullptr;

        while (current != nullptr) {
<<<<<<< HEAD
            next_node = current->next; 
            current->next = prev;      
            prev = current;            
            current = next_node;
        }
        head = prev; 
        cout << "List reversed." << endl;
    }

    
=======
            next_node = current->next; // Save the next node
            current->next = prev;      // Reverse the link
            prev = current;            // Move prev and current one step ahead
            current = next_node;
        }
        head = prev; // Update head to the new first node
        cout << "List reversed." << endl;
    }

    // Method to display the linked list
>>>>>>> f4a4279db2b0cce0ded66c9be7d62fea249e0c95
    void display() {
        if (head == nullptr) {
            cout << "List is empty." << endl;
            return;
        }

        Node* temp = head;
        while (temp != nullptr) {
<<<<<<< HEAD
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "nullptr" << endl; 
    }


=======
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "nullptr" << endl; // End of the list
    }

    // Destructor to free memory used by the list
>>>>>>> f4a4279db2b0cce0ded66c9be7d62fea249e0c95
    ~DynamicMemoryAllocation() {
        Node* temp;
        while (head != nullptr) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};

<<<<<<< HEAD
=======
// Main function
>>>>>>> f4a4279db2b0cce0ded66c9be7d62fea249e0c95
int main() {
    DynamicMemoryAllocation list;
    int choice, value;

    do {
<<<<<<< HEAD

=======
        // Menu for CRUD operations
>>>>>>> f4a4279db2b0cce0ded66c9be7d62fea249e0c95
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
<<<<<<< HEAD
            case 1: 
=======
            case 1: // Insert at Beginning
>>>>>>> f4a4279db2b0cce0ded66c9be7d62fea249e0c95
                cout << "Enter value to insert at the beginning: ";
                cin >> value;
                list.insert_at_beginning(value);
                break;

<<<<<<< HEAD
            case 2: 
=======
            case 2: // Search for an Element
>>>>>>> f4a4279db2b0cce0ded66c9be7d62fea249e0c95
                cout << "Enter value to search: ";
                cin >> value;
                if (list.search(value)) {
                    cout << "Element " << value << " found in the list." << endl;
                } else {
                    cout << "Element " << value << " not found in the list." << endl;
                }
                break;

<<<<<<< HEAD
            case 3: 
=======
            case 3: // Delete a Node
>>>>>>> f4a4279db2b0cce0ded66c9be7d62fea249e0c95
                cout << "Enter value to delete: ";
                cin >> value;
                list.delete_node(value);
                break;

<<<<<<< HEAD
            case 4: 
                list.reverse();
                break;

            case 5:
=======
            case 4: // Reverse the List
                list.reverse();
                break;

            case 5: // Display the List
>>>>>>> f4a4279db2b0cce0ded66c9be7d62fea249e0c95
                cout << "Current List: ";
                list.display();
                break;

<<<<<<< HEAD
            case 6: 
=======
            case 6: // Exit
>>>>>>> f4a4279db2b0cce0ded66c9be7d62fea249e0c95
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 6);

    return 0;
}
