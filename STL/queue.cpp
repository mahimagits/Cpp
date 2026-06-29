// A queue is an STL container adapter that follows the FIFO (First In, First Out) principle.
// The first element inserted is the first element removed.
// Elements are inserted at the back and removed from the front.

//Time Complexity - O(1);

#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<string> q;
    q.push("Mahima");
    q.push("Jha");

    cout << "Top element : " << q.front() << endl;

    cout << "Size before pop : " << q.size() << endl;
    q.pop();
    cout << "Size after pop : " << q.size() << endl;

    cout << "Top element : " << q.front() << endl;


    return 0;
}