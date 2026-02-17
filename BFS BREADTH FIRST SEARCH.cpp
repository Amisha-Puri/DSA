#include <iostream>
#include <queue>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

void BFS(Node* root) {
    if(root == NULL) return;

    queue<Node*> q;
    q.push(root);

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        cout << temp->data << " ";

        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
    }
}

int main() {
    Node* root = new Node{1, NULL, NULL};
    root->left = new Node{2, NULL, NULL};
    root->right = new Node{3, NULL, NULL};
    root->left->left = new Node{4, NULL, NULL};
    root->left->right = new Node{5, NULL, NULL};

    BFS(root);
}
