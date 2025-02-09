#include <iostream>
using namespace std;

// Node class representing each node in the linked list
class Node {
public:
    int data;
    Node* next;
    
    // Constructor to initialize the node with data and next as null
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// DynamicMemory class to handle operations on the linked list
class DynamicMemoryAllocation {
private:
    Node* head; // Head of the linked list

public:
    // Constructor to initialize the linked list with an empty head
    DynamicMemoryAllocation() {
        head = nullptr;
    }

    // Method to insert a node at the beginning of the linked list
    void insert_at_beginning(int data) {
        Node* new_node = new Node(data); // Dynamically allocate memory for new node
        new_node->next = head;           // Make the new node point to the current head
        head = new_node;                 // Update head to the new node
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
    void delete_node(int key) {
        if (head == nullptr) {
            cout << "List is empty. Nothing to delete." << endl;
            return;
        }
        
        // If the node to delete is the head node
        if (head->data == key) {
            Node* temp = head;
            head = head->next;  // Move head to the next node
            delete temp;        // Free the memory of the old head
            cout << "Node with value " << key << " deleted." << endl;
            return;
        }

        Node* temp = head;
        // Traverse the list to find the node to delete
        while (temp->next != nullptr && temp->next->data != key) {
            temp = temp->next;
        }

        // If the node to delete is found
        if (temp->next != nullptr) {
            Node* node_to_delete = temp->next;
            temp->next = temp->next->next;  // Bypass the node
            delete node_to_delete;          // Free the memory of the deleted node
            cout << "Node with value " << key << " deleted." << endl;
        } else {
            cout << "Node with value " << key << " not found." << endl;
        }
    }

    // Method to reverse the linked list
    void reverse() {
        Node* prev = nullptr;
        Node* current = head;
        Node* next_node = nullptr;

        while (current != nullptr) {
            next_node = current->next; // Save the next node
            current->next = prev;      // Reverse the link
            prev = current;            // Move prev and current one step ahead
            current = next_node;
        }
        head = prev; // Update head to the new first node
        cout << "List reversed." << endl;
    }

    // Method to display the linked list
    void display() {
        if (head == nullptr) {
            cout << "List is empty." << endl;
            return;
        }

        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "nullptr" << endl; // End of the list
    }

    // Destructor to free memory used by the list
    ~DynamicMemoryAllocation() {
        Node* temp;
        while (head != nullptr) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};

// Main function
int main() {
    DynamicMemoryAllocation list;

    // Insert some elements
    list.insert_at_beginning(10);
    list.insert_at_beginning(20);
    list.insert_at_beginning(30);
    list.insert_at_beginning(40);

    // Display the list
    cout << "Current List: ";
    list.display();

    // Search for an element
    int search_value = 20;
    if (list.search(search_value)) {
        cout << "Element " << search_value << " found in the list." << endl;
    } else {
        cout << "Element " << search_value << " not found in the list." << endl;
    }

    // Delete a node
    int delete_value = 30;
    list.delete_node(delete_value);
    cout << "List after deletion: ";
    list.display();

    // Reverse the list
    list.reverse();
    cout << "Reversed List: ";
    list.display();

    return 0;
}
