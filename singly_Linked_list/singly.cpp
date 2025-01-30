#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;
};



int main () {

    Node *n1 =  NULL;
    n1 = new Node();

    n1->data = 24;
    n1->next = NULL;

    Node *n2 = new Node();
    n2->data = 25;
    n2->next = NULL;
    n1->next = n2;

    Node *n3 =  new Node();
    n3->data = 26;
    n3->next = NULL;
    n2->next = n3;

    Node *n4 =  new Node();
    n4->data = 27;
    n4->next = NULL;
    n3->next = n4;

   

 cout << "n1: " << n1->data << ". Address: " <<  n1->next << endl;
 cout << "n2: " << n2->data << ". Address: " <<  n2->next << endl;
 cout << "n3: " << n3->data << ". Address: " <<  n3->next << endl;
 cout << "n4: " << n4->data << ". Address: " <<  n4->next << endl;
   
}