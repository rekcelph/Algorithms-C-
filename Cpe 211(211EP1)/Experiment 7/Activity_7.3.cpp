#include <bits/stdc++.h> 
using namespace std;

struct Node {
    int data;
    struct Node *left, *right;
};
Node* newNode(int data) {
    Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}
void printPostorder(struct Node* node) {
    if (node == NULL)
        return;

    printPostorder(node->left);

    printPostorder(node->right);

    cout << node->data << " ";
}

int main() {
    struct Node* root = newNode(10);
    root->left = newNode(8);
    root->right = newNode(11);
    
    root->left->left = newNode(2);
    root->right->right = newNode(14);
    
    root->left->left->left = newNode(1);
    root->left->left->right = newNode(6);
    
    root->right->right->left = newNode(13);
    root->right->right->right = newNode(16);
    
    root->left->left->right->left = newNode(4);
    root->left->left->right->left->right = newNode(5);
    root->left->left->right->left->left = newNode(3);

    cout << "\nPost-order traversal of the binary search tree is: ";
    printPostorder(root);
    cout << endl;

    return 0;
}
