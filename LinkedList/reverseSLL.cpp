#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};

Node* reverse(Node* head){
    Node* prev = nullptr;
    Node* curr = head;
    Node* nextNode = nullptr;

    while(curr != nullptr){
        nextNode = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = nextNode;
    }

    return prev;
}

void display(Node* head){
    while(head != nullptr){
        cout << head -> data << " -> ";
        head = head -> next;
    }
    cout << "NULL" << endl;
}

int main(){
    Node* head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);

    cout << "Original List : ";
    display(head);

    cout << "Reversed List : ";
    display(reverse(head));

    return 0;
}