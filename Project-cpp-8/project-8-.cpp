#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

class SinglyLinkedList
{
private:
    Node *head;
    int size;

public:
    SinglyLinkedList() : head(nullptr), size(0) {}

    void insertData(int value)

    {
        Node *newNode = new Node{value, head};
        head = newNode;
        size++;
        cout << "Node inserted at the beginning successfully!" << endl;
    }

    void SerchData(int value)
    {
        Node *newNode = new Node{value, head};
        head = newNode;
        size--;
        cout << " Node is found successfully !" << endl;
    };

    void deleteData()
    {
        if (head == nullptr)
        {
            cout << "List is empty.\n";
            return;
        }
        Node *temp = head;
        head = head->next;
        delete temp;
        size--;
        cout << "Node deleted from the Memory successfully!" << endl;
    }

    void Reverse() {

    };
};

int main()
{

    int choice, element, id, value;

    do
    {

        cout << endl
             << "Dyanamic Memory Allocation " << endl
             << endl;
        cout << "Press 1 for Insert new node in beggining" << endl;
        cout << "Press 2 for serch node " << endl;
        cout << "Press 3 for Delete node" << endl;
        cout << "Press 4 for list been reverse oder" << endl;
        cout << "Press 0 for Exit " << endl;

        cout << "Enter Your Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter your element : ";
            cin >> element;
            //    insertData();
            break;

        case 2:
            cout << "Enter your element : ";
            cin >> id;
            cout << "Element value is : " << id << endl;
            // SerchData();

            break;

        case 3:
            cout << "you choice delete elememt value: " << endl;
            cin >> value;

            cout << "deleted value is: " << value << endl;
            break;

        case 4:
            break;

        case 0:
            break;

        default:

            cout << "Plase try again ! Invelid Choice " << endl;

            break;
        }

    } while (choice != 0);
}