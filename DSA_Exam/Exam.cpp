#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};


class LinkedList {
public:
    Node* head;
    LinkedList() : head(nullptr) {}

    void add(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) temp = temp->next;
        temp->next = newNode;
    }

//  output =   11 -> 12 -> 13 -> 14 -> 15 -> NULL



    void addElementPosition(int val, int pos) {
        if (pos < 0) {
            cout << "Invalid position" << endl;
            return;
        }
        Node* newNode = new Node(val);
        if (pos == 0) {
            newNode->next = head;
            head = newNode;
            return;
        }
        Node* temp = head;
        for (int i = 0; temp && i < pos - 1; i++) {
            temp = temp->next;
        }
        if (!temp) {
            cout << "Position out of range" << endl;
            return;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

//  output = 11 -> 12 -> 13 -> 14 -> NULL


    void remove(int key) {
        if (!head) {
            cout << "List is empty!" << endl;
            return;
        }
        if (head->data == key) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node* temp = head;
        while (temp->next && temp->next->data != key) temp = temp->next;
        if (!temp->next) {
            cout << "Element not found!" << endl;
            return;
        }
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }

//  value =  16
// position =  3
// output = 11 -> 12 -> 16 -> 13 -> 14 -> NULL
  

   
    void removeElementPosition(int pos) {
        if (!head) {
            cout << "List is empty!" << endl;
            return;
        }
        if (pos < 0) {
            cout << "Invalid position!" << endl;
            return;
        }
        if (pos == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node* temp = head;
        for (int i = 0; temp->next && i < pos - 1; i++) {
            temp = temp->next;
        }
        if (!temp->next) {
            cout << "Position out of range!" << endl;
            return;
        }
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }

// position deleted =  2 
//  output =  11 -> 12 -> 13 -> 14 -> NULL

    void display() {
        if (!head) {
            cout << "List is empty!" << endl;
            return;
        }
        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};
//  output =  11 -> 12 -> 13 -> 14 -> 15 -> NULL

void merge(int arr[], int left, int mid, int right) {
    int num1 = mid - left + 1, num2 = right - mid;
    int* Leftside = new int[num1];
    int* Rightside = new int[num2];
    for (int i = 0; i < num1; i++) Leftside[i] = arr[left + i];
    for (int i = 0; i < num2; i++) Rightside[i] = arr[mid + 1 + i];
    int i = 0, j = 0, k = left;
    while (i < num1 && j < num2) arr[k++] = (Leftside[i] <= Rightside[j]) ? Leftside[i++] : Rightside[j++];
    while (i < num1) arr[k++] = Leftside[i++];
    while (j < num2) arr[k++] = Rightside[j++];
    delete[] Leftside;
    delete[] Rightside; 
}


//  array size =  5
// array element = [ 23 , 43, 25, 76, 75 ]

// Sorted array using Merge Sort: 23 25 43 75 76 


void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}


int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) swap(arr[++i], arr[j]);
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

//  array size =  5
// array element =  [12, 34, 65, 98, 27]
// Sorted array using Quick Sort :  12 27 34 65 98 


int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}


int main() {
    LinkedList list;
    int choice, value, position, n, target;
    int* arr = nullptr;

    do {
        cout << endl << "Menu:" << endl;
        cout << " press 1 for add element into Linked List" << endl;
        cout << " press 2 for remove element from Linked List " << endl;
        cout << " press 3 add element at Position in Linked List" << endl;
        cout << " press 4 remove element from Position in Linked List" << endl;
        cout << " press 5 Display Linked List" << endl;
        cout << " press 6 Sort an array using Merge Sort" << endl;
        cout << " press 7 Sort an array using Quick Sort" << endl;
        cout << " press 8 Binary Search in a sorted array" << endl;
        cout << " press 0 Exit Program " << endl;
        cout << "Enter Your Choice ";
        cin >> choice;
        

        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                list.add(value);
                break;
            case 2:
                cout << "Enter value to delete: ";
                cin >> value;
                list.remove(value);
                break;
            case 3:
                cout << "Enter value and position: ";
                cin >> value >> position;
                list.addElementPosition(value, position);
                break;
            case 4:
                cout << "Enter position to delete: ";
                cin >> position;
                list.removeElementPosition(position);
                break;
            case 5:
                list.display();
                break;
            case 6:
                cout << "Enter array size : ";
                cin >> n;
                arr = new int[n];
                cout << "Enter elements: ";
                for (int i = 0; i < n; i++) cin >> arr[i];

                mergeSort(arr, 0, n - 1);
                cout << "Sorted array using Merge Sort: ";
                for (int i = 0; i < n; i++) cout << arr[i] << " ";
                cout << endl;
                break;
            case 7:
                cout << "Enter array size: ";
                cin >> n;
                arr = new int[n];
                cout << "Enter elements: ";
                for (int i = 0; i < n; i++) cin >> arr[i];

                quickSort(arr, 0, n - 1);
                cout << "Sorted array using Quick Sort: ";
                for (int i = 0; i < n; i++) cout << arr[i] << " ";
                cout << endl;
                break;

            case 8:
                cout << "Enter target value to search: ";
                cin >> target;
                break;

            case 0:
                cout << "Exit" << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    } while (choice != 0);

  
    delete[] arr;
    return 0;
}
