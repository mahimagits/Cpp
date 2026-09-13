#include <iostream>
using namespace std;

int main(){
    string s;
    cout << "Enter a string : ";
    cin >> s;

    int hash[256] = {0};
    for(int i = 0; i < s.size(); i++){
        hash[s[i]]++;
    }

    char ch;
    cout << "Enter any alphabet : ";
    cin >> ch;

    cout << hash[ch];

    return 0;

}