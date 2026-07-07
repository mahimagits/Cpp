#include <iostream>
#include <cstring>
using namespace std;

string removeOccurrances(string s, string part){
    while(s.length() != 0 && s.find(part) < s.length()){
        s.erase(s.find(part), part.length());
    }

    return s;
}

int main(){
    string s;

    cout << "Write anything : ";
    getline(cin, s);

    string part = "abc";

    cout << "Before Removal : " << endl;
    cout << s << endl;

    cout << "After Removal : " << endl;
    string temp = removeOccurrances(s, part);
    cout << temp << endl;

    return 0;
}