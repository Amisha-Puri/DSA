#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

// Create new node
Node* createNode(int val) {
    Node* newNode = new Node;
    newNode->data = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Insert
Node* insert(Node* root, int val) {
    if(root == NULL)
        return createNode(val);

    if(val < root->data)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);

    return root;
}

// Search
bool search(Node* root, int key) {
    if(root == NULL) return false;

    if(root->data == key)
        return true;
    else if(key < root->data)
        return search(root->left, key);
    else
        return search(root->right, key);
}

// Find minimum (used in delete)
Node* findMin(Node* root) {
    while(root->left != NULL)
        root = root->left;
    return root;
}

// Delete
Node* deleteNode(Node* root, int key) {
    if(root == NULL) return NULL;

    if(key < root->data)
        root->left = deleteNode(root->left, key);
    else if(key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        // Node with one child or no child
        if(root->left == NULL)
            return root->right;
        else if(root->right == NULL)
            return root->left;

        // Node with two children
        Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }

    return root;
}

// Inorder Traversal
void inorder(Node* root) {
    if(root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {

    Node* root = NULL;

    // Insert elements
    root = insert(root, 5);
    root = insert(root, 3);
    root = insert(root, 8);
    root = insert(root, 2);
    root = insert(root, 4);

    cout << "Inorder Traversal: ";
    inorder(root);

    cout << "\nSearch 4: ";
    if(search(root, 4))
        cout << "Found";
    else
        cout << "Not Found";

    root = deleteNode(root, 3);

    cout << "\nAfter Deletion: ";
    inorder(root);

    return 0;
}
