// A stack is an STL container adapter that follows the LIFO (Last In, First Out) principle.
// The last element inserted is the first element removed.
// You can only insert and remove elements from the top.

#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack <string> s;

    s.push("Mahima");
    s.push("Jha");

    cout << "Top Element : " << s.top() << endl;

    s.pop();

    cout << "Top Element : " << s.top() << endl;

    cout << "Size : " << s.size() << endl;

    return 0;
}