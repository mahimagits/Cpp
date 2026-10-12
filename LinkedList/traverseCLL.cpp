#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};

void display(Node* head){
    if(head == nullptr){
        cout << "List is empty" << endl;
    }

    Node* temp = head;
    do {
        cout << temp -> data << " -> ";
        temp = temp -> next;
    } while(temp != head);

    cout << "(Back to " << temp -> data << ")" << endl;
}

int main(){
    Node* head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);
    head -> next -> next -> next -> next = head;

    display(head);

    return 0;
}