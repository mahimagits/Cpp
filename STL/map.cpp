// A map is an STL container that stores key-value pairs.
// Each key is unique.
// Keys are stored in sorted (ascending) order by default.
// Implemented using a Red-Black Tree.

//Time Complexity - O(logn)

#include <iostream>
#include <map>
using namespace std;

int main(){
    map<int, string> m;

    m[1] = "Apple";
    m[2] = "Grapes";
    m[3] = "Orange";

    m.insert({4, "Banana"});

    cout << "Before Erase :- " << endl;
    for(auto x : m){
    cout << x.first << " -> " << x.second << endl;
    }

    cout << "4 present or not : " << m.count(4) << endl;

    m.erase(4);
    cout << "After Erase :- " << endl;
    for(auto x : m) {
        cout << x.first << " -> " << x.second << endl;
    }

    auto it = m.find(4);

    if(it != m.end()){
        cout << "Found" ;
    } else {
        cout << "Not Found";
    }

    return 0;
}