#include <iostream>
using namespace std;

struct Node{
    string data;
    Node* next;

    Node(string val){
        data = val;
        next = nullptr;
    }
};

Node* insertAfter(Node* head, string key, string val){
    if(head == nullptr){
        cout << "List is empty" << endl;
        return head;
    }

    Node* temp = head;

    do {
        if(temp -> data == key){
            break;
        }
        temp = temp -> next;
    } while (temp != head);

    if(temp -> data != key){
        cout << "Key Not Found" << endl;
        return head;
    }

    Node* newNode = new Node(val);
    newNode -> next = temp -> next;
    temp -> next = newNode;

    return head;
}

void display(Node* head){
    Node* temp = head;
    do{
        cout << temp -> data << " -> ";
        temp = temp -> next;
    } while (temp != head);

    cout << "(Back to " << temp -> data << ")" << endl;
}

int main(){
    Node* head = new Node("P1");
    head -> next = new Node("P2");
    head -> next -> next = new Node("P3");
    head -> next -> next -> next = new Node("P5");
    head -> next -> next -> next -> next = head;

    cout << "Before Insertion : ";
    display(head);

    cout << "After Insertion : ";
    display(insertAfter(head, "P3", "P4"));

    return 0;
}