#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

string reverseSubstring(string s){
    string temp = "";
    string sub = "";
    for(int i = (s.length() - 1); i >= 0; i--){
        if(s[i] == ' '){
            reverse(sub.begin(), sub.end());
            temp += sub + " ";
            sub = "";
        } else {
            sub.push_back(s[i]);
        }
    }
    reverse(sub.begin(), sub.end());
    temp += sub;

    return temp;
}

int main(){
    string s;

    cout << "Enter anything : ";
    getline(cin, s);

    cout << "Before Reversal : " << endl;
    cout << s << endl;

    cout << "After Reversal : " << endl;
    string temp = reverseSubstring(s);
    cout << temp << endl;

    return 0;
}