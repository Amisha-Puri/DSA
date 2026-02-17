#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

void preorder(Node* root) {
    if(root == NULL) return;

    cout << root->data << " ";  // Root
    preorder(root->left);       // Left
    preorder(root->right);      // Right
}
int main() {

    Node* root = new Node{5, NULL, NULL};
    root->left = new Node{3, NULL, NULL};
    root->right = new Node{8, NULL, NULL};
    root->left->left = new Node{2, NULL, NULL};
    root->left->right = new Node{4, NULL, NULL};

    cout << "Preorder: ";
    preorder(root);

    return 0;
}
