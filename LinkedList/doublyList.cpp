#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        prev = next = nullptr;
    }
};

class doublyList{
    Node* head;
    Node* tail;

public:
    doublyList(){
        head = tail = nullptr;
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == nullptr){
            head = tail = newNode;
        } else {
            newNode -> next = head;
            head -> prev = newNode;
            head = newNode;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == nullptr){
            head = tail = newNode;
        } else {
            newNode -> prev = tail;
            tail -> next = newNode;
            tail = newNode;
        }
    }

    void pop_front(){
        if(head == NULL){
            cout << "DLL is already empty" << endl;
            return;
        }
        Node* temp = head;
        head = head -> next;
        if(head != nullptr){
            head -> prev = nullptr;
        }
        temp -> next = nullptr;
        delete temp;
    }

    void pop_back(){
        if(head == NULL){
            cout << "DLL is already empty" << endl;
            return;
        }
        Node* temp = tail;
        tail = tail -> prev;
        if(tail != nullptr){
            tail -> next = nullptr;
        }
        temp -> prev = nullptr;
        delete temp;
    }

    void print(){
        Node* temp = head;
        while(temp != nullptr){
            cout << temp -> data << " <-> ";
            temp = temp -> next;
        }
        cout << "NULL\n";
    }
};

int main(){
    doublyList dll;

    dll.push_front(1);
    dll.push_front(2);
    dll.push_front(3);
    dll.push_back(4);
    dll.push_back(5);
    dll.push_back(6);
    dll.pop_front();
    dll.pop_back();

    dll.print();

    return 0;
}