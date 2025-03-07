
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

int main() {
   
    Node* root = nullptr;
    Node* node1 = nullptr;
    Node* node2 = nullptr;

    root->left = node1;
    root->right = node2;

    
    cout <<  root->left << " - " <<  root->data << " - "   << root->right  <<endl;

    return 0;
}
