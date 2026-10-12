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

Node* deletion(Node* head, int key){
    if(head == nullptr){
        cout << "List is empty"<< endl;
        return head;
    }

    if(head -> data == key){
        Node* temp = head;
        head = head -> next;
        delete temp;
        return head;
    }

    Node* temp = head;
    while(temp -> next != nullptr && temp -> next -> data != key){
        temp = temp -> next;
    }

    if(temp -> next == nullptr){
        cout << "Key Not Found" << endl;
        return head;
    }

    Node* temp2 = temp -> next;
    temp -> next = temp2 -> next;
    delete temp2;

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

    cout << "Before Deletion : ";
    display(head);

    cout << "After Deletion : ";
    display(deletion(head, 40));

    return 0;
}