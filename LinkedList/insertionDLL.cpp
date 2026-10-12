#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

Node* insertAfter(Node* head, int key, int val){
    Node* temp = head;
    while(temp != nullptr && temp -> data != key){
        temp = temp -> next;
    }

    if(temp -> data != key){
        cout << "Key Not Found" << endl;
        return head;
    }

    Node* newNode = new Node(val);

    newNode -> next = temp -> next;
    newNode -> prev = temp;

    if(temp -> next != nullptr){
        temp -> next -> prev = newNode;
    }

    temp -> next = newNode;

    return head;
}

void display(Node* head){
    while(head != nullptr){
        cout << head -> data << " <-> ";
        head = head -> next;
    }
    cout << "NULL" << endl;
}

int main(){
    Node* head = new Node(10);
    Node* B = new Node(20);
    Node* C = new Node(30);
    Node* D = new Node(50);
    Node* E = new Node(60);

    head -> next = B;
    B -> prev = head;

    B -> next = C;
    C -> prev = B;

    C -> next = D;
    D -> prev = C;

    D -> next = E;
    E -> prev = D;

    cout << "Before Insertion : ";
    display(head);

    cout << "After Insertion : ";
    display(insertAfter(head, 30, 40));

    return 0;
}