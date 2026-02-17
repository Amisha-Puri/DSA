//SINGLY LINKED LIST
//#include <iostream>
//using namespace std;
//
//struct Node {
//    int data;
//    Node* next;
//};
//
//int main() {
//    Node* head = new Node{10, NULL};
//    Node* second = new Node{20, NULL};
//    Node* third = new Node{30, NULL};
//
//    head->next = second;
//    second->next = third;
//
//    Node* temp = head;
//    while(temp != NULL) {
//        cout << temp->data << " ";
//        temp = temp->next;
//    }
//
//    return 0;
//}
//doubly linked list
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

int main() {

    // Create nodes
    Node* n1 = new Node{10, NULL, NULL};
    Node* n2 = new Node{20, NULL, NULL};
    Node* n3 = new Node{30, NULL, NULL};

    // Link nodes
    n1->next = n2;
    n2->prev = n1;
    n2->next = n3;
    n3->prev = n2;

    // Traverse forward
    Node* temp = n1;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
