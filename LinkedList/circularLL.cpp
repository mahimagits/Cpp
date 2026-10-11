#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class circularList{
    Node* head;
    Node* tail;

public:
    circularList(){
        head = tail = NULL;
    }

    void insertionAtHead(int val){
        Node* newNode = new Node(val);
        if(tail == NULL){
            head = tail = newNode;
            tail -> next = head;
        } else {
            newNode -> next = head;
            head = newNode;
            tail -> next = head;
        }
    }

    void insertionAtTail(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            tail -> next = head;
        } else {
            newNode -> next = head;
            tail -> next = newNode;
            tail = newNode;
        }
    }

    void print(){
        if(head == NULL) return;

        cout << head -> data << " -> ";
        Node* temp = head -> next;
        
        while(temp != head){
            cout << temp -> data << " -> ";
            temp = temp -> next;
        }

        cout << temp -> data << endl;
    }
};

int main(){
    circularList cll;
    cll.insertionAtHead(3);
    cll.insertionAtHead(2);
    cll.insertionAtHead(1);
    cll.insertionAtTail(4);
    cll.insertionAtTail(5);
    cll.insertionAtTail(6);

    cll.print();

    return 0;
}