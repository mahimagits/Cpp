// A list is an STL container that implements a doubly linked list. 
// It allows efficient insertion and deletion of elements at any position (once you have an iterator), 
// but it does not support random access like a vector or deque.

//Time Complexity - O(n)

#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l;

    l.push_front(1);
    l.push_back(2);

    for(int i : l){
        cout << i << " " ; 
    }

    l.erase(l.begin());

    cout << "\nAfter erase :-" << endl;

    for(int i : l){
        cout << i << " " ; 
    }

    cout << "\nSize of list : " << l.size() << endl;

    list<int> n(5, 100);
    for(int i : n){
        cout << i << " ";
    }


    return 0;
}