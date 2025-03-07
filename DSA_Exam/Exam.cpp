



#include <iostream>
using namespace std;

 class Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;
    LinkedList() : head(nullptr) {}


void add(Node*& head, int value) {
    Node* newNode = new Node{value, nullptr};
    if (!head) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next) temp = temp->next;
        temp->next = newNode;
    }
}
    
 void remove(Node*& head) {
    int current =  this->head
    int result = []
      if (!current) {
            head = newNode;
            return; 
        }
        while (current)
        {
            result =  result + current->next
            current->Node = newNode
        }
        current->next = nullptr
}


void addStart(Node*& head, int value) {
    Node* newNode = new Node
    {value, head};

    head = newNode;
}


void  addElePosition(Node*& head, int value, int pos) {
    if (pos < 1) {
        cout << "Invelid position" << endl;
        return;
    }
    if (pos == 1) {
        insertAtBeginning(head, value);
        return;
    }

    Node* temp = head;
    for (int i = 1; temp && i < pos - 1; i++)
        temp = temp->next;

    if (!temp) {
        cout << "Position out of range!" << endl;
        return;
    }

    Node* newNode = new Node{value, temp->next};
    temp->next = newNode;
    cout <<  pos <<  endl;
}

void  removeElePosition(Node*& head, int value) {
    if (!head) {
        return;
    }
    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        cout  << value  << endl;
        return;
    }
    Node* temp = head;
    while (temp->next && temp->next->data != value)
        temp = temp->next;

    if (!temp->next) {
        cout << "Value not found!" << endl;
        return;
    }

    Node* delNode = temp->next;
    temp->next = temp->next->next;
    delete delNode;
    cout  << value << endl;
} 


 void dispaly() {
   if (!head) {
        cout << "linked list is empty!" << endl;
        return;
    }
    else {
        Node* temp = head;
        int result = [];
        while (temp->next)
         temp = temp->next;
         result = result.add(temp.vaule)
        temp->next = newNode; 
    }
}


void merge (int start, int mid, int end) {
    int start  = 0;
    int end = result.length;
    int mid =  result.length/2
    
for (i = start; i< mid i++) {
      result[i]
}
int left =  result[i] + " ";

for (j = mid; j < result.length j++) {
     result[j]
}
int right =  result[j] + " ";

// cout << left << endl;
// cout << right << endl;

}

void mergeSort(int left, int right){

    for(i = 0; i < result.length; i++){
       int answer = []
       for (j = i + 1; j < result.length; j++)
       {
          if(result[i] < result[j]){
               answer += result[i]
          } else (result[i] > result[j]) {
            answer += result[j]
          }
       }
    }
    cout << " your sorted linklist using merge sort is : " << answer << endl;
}


void QueckSort(int result){
    int pivot =  result[0]
    int Que = []

    for (i = 0; i < result.length; i++){
        if(pivot < result[i]){
            Que += pivot
        }
        cout << Que << endl;
        else (pivot > result[i]) {
            Que += result [i]
        }

    }
}

void binary_Serch() {

}

}


int main () {
    do { 
        cout << "Linklist Menu " << endl;
        cout << "press 1 for add element in linklist end position " << endl;
        cout << "press 2 for remove element in linklist end position" << endl;
        cout << "press 3 for add element in linklist any position " << endl;
        cout << "press 4 for remove element in linklist any position " << endl;
        cout << "press 5 for display linklist" << endl;
        cout << "press 6 for sorting linklist using Merge sort" << endl;
        cout << "press 7 for sorting linklilst using Queck sort" << endl;
        cout << "press 8 for binary search" << endl;
        cout << "press 0 for Exit" << endl;

        cout << "Enter Your Choice " << endl;
        cin >> choice


        switch (choice){
         int list = new LinkedList()

        case 1 ;
              cout << "Enter your Element " << endl;
              cin >> value;
              list add();
            break;

        case 2 ;
              list.remove();
            break;
        
        case 3 ;
          cout << "Enter Your position" << endl;
          cin >> pos;
          cout << "Enter Your element" << endl;
          cin >> value;

          list.addElePosition ()
        break;

        case 4 ;
           cout << "Enter Your Position" << endl;
           cin >> pos;
           cout << "Enter Your Element" << endl;
           cin >> value

           list.removeElePosition();
            break;

        case 5 ;
              list.dispaly()
            break;

        case 6 ;
              cout << "your linklist sorted by merge sort " << endl;
             list.mergeSort();
            break;

        case 7 ;
            cout << "your linklist sorted by Queck sort"  << endl;
           list.QueckSort ();

            break;
        case 8 ;
             cout << "Your searching element is " << endl;
             list.binary_Serch();
            break;
        case 0 ;
            break;
        
        default:
         cout << "Enter valid choice" << endl;
            break;
        }

    }( choice != 0 )
    
}


