#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void printList(Node* n) {
    while (n != nullptr) {
        cout << n->data << " ";
        n = n->next;
    }
}

int main() {
    Node* head = new Node{5, nullptr};
    Node* second = new Node{6, nullptr};
    Node* third = new Node{7, nullptr};

    head->next = second;
    second->next = third;

    printList(head);

    return 0;
}

