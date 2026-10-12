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

Node* insertAfter(Node* head, int key, int val){
    Node* temp = head;

    while(temp != nullptr && temp -> data != key){
        temp = temp -> next;
    }

    if(temp == nullptr){
        cout << "Key Not Found" << endl;
        return head;
    }

    Node* newNode = new Node(val);
    newNode -> next = temp -> next;
    temp -> next = newNode;

    return head;
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

    cout << "Before Insertion : ";
    display(head);

    cout << "After Insertion : ";
    display(insertAfter(head, 20, 25));

    return 0;
}