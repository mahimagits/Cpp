// A set is an STL container that stores unique elements in sorted order.
// All elements are unique (no duplicates).
// Elements are stored in ascending order by default.

#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;

    s.insert(1);
    s.insert(5);
    s.insert(3);
    s.insert(2);
    s.insert(4);

    for(int i : s){
        cout << i << " ";
    }
    cout << endl;

    set<int> :: iterator it = s.begin();

    s.erase(it);

    for(int i : s){
        cout << i << " ";
    }

    s.insert(1);

    cout << "\nValue present or not : " << s.count(5) << endl;

    return 0;
}