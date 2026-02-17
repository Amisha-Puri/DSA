//#include <iostream>
//#include <vector>
//using namespace std;
//
//struct Node {
//    int data;
//    Node* left;
//    Node* right;
//};
//
//// Inorder Traversal (Store sorted values)
//void inorder(Node* root, vector<int>& v) {
//    if(root == NULL) return;
//
//    inorder(root->left, v);
//    v.push_back(root->data);
//    inorder(root->right, v);
//}
//
//// Build Balanced BST from sorted array
//Node* buildBalanced(vector<int>& v, int l, int r) {
//    if(l > r) return NULL;
//
//    int mid = (l + r) / 2;
//
//    Node* root = new Node{v[mid], NULL, NULL};
//
//    root->left = buildBalanced(v, l, mid - 1);
//    root->right = buildBalanced(v, mid + 1, r);
//
//    return root;
//}
//
//// Convert BST to Balanced BST
//Node* balanceBST(Node* root) {
//    vector<int> v;
//    inorder(root, v);
//    return buildBalanced(v, 0, v.size() - 1);
//}
//
//// Insert in BST (for testing)
//Node* insert(Node* root, int key) {
//    if(root == NULL)
//        return new Node{key, NULL, NULL};
//
//    if(key < root->data)
//        root->left = insert(root->left, key);
//    else
//        root->right = insert(root->right, key);
//
//    return root;
//}
//
//// Print Inorder
//void printInorder(Node* root) {
//    if(root == NULL) return;
//    printInorder(root->left);
//    cout << root->data << " ";
//    printInorder(root->right);
//}
//
//int main() {
//
//    Node* root = NULL;
//
//    // Creating Unbalanced BST
//    root = insert(root, 10);
//    root = insert(root, 20);
//    root = insert(root, 30);
//    root = insert(root, 40);
//    root = insert(root, 50);
//
//    cout << "Original BST (Inorder): ";
//    printInorder(root);
//
//    root = balanceBST(root);
//
//    cout << "\nBalanced BST (Inorder): ";
//    printInorder(root);
//
//    return 0;
//}
#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
void storeInorder(Node* root, vector<int>& arr) {
    if (!root) return;
    storeInorder(root->left, arr);
    arr.push_back(root->data);
    storeInorder(root->right, arr);
}

Node* buildBalanced(vector<int>& arr, int start, int end) {
    if (start > end) return NULL;

    int mid = (start + end) / 2;
    Node* root = new Node(arr[mid]);

    root->left = buildBalanced(arr, start, mid - 1);
    root->right = buildBalanced(arr, mid + 1, end);

    return root;
}

void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    Node* root = new Node(10);
    root->right = new Node(20);
    root->right->right = new Node(30);
    root->right->right->right = new Node(40);

    vector<int> arr;
    storeInorder(root, arr);

    Node* balancedRoot = buildBalanced(arr, 0, arr.size() - 1);

    cout << "Inorder of Balanced BST:\n";
    inorder(balancedRoot);

    return 0;
}