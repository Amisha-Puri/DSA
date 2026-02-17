 #include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    int height;
};

// Get height
int height(Node* n) {
    if(n == NULL) return 0;
    return n->height;
}

// Get balance factor
int getBalance(Node* n) {
    if(n == NULL) return 0;
    return height(n->left) - height(n->right);
}

// Right rotation
Node* rightRotate(Node* y) {
    Node* x = y->left;
    Node* T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;

    return x;
}

// Left rotation
Node* leftRotate(Node* x) {
    Node* y = x->right;
    Node* T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;

    return y;
}

// Insert
Node* insert(Node* root, int key) {

    if(root == NULL)
        return new Node{key, NULL, NULL, 1};

    if(key < root->data)
        root->left = insert(root->left, key);
    else if(key > root->data)
        root->right = insert(root->right, key);
    else
        return root;

    root->height = 1 + max(height(root->left), height(root->right));

    int balance = getBalance(root);

    // LL
    if(balance > 1 && key < root->left->data)
        return rightRotate(root);

    // RR
    if(balance < -1 && key > root->right->data)
        return leftRotate(root);

    // LR
    if(balance > 1 && key > root->left->data) {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    // RL
    if(balance < -1 && key < root->right->data) {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
}

// Inorder
void inorder(Node* root) {
    if(root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {

    Node* root = NULL;

    int arr[] = {50,40,35,60,70,65,45,43};

    for(int i=0; i<8; i++)
        root = insert(root, arr[i]);

    cout << "Inorder: ";
    inorder(root);

    return 0;
}
