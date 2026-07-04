#include <iostream>
using namespace std;

char getMaxChar(string s){
    int arr[26] = {0};     //count of character in string
    int number = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            number = s[i] - 'a';
        } else {
            number = s[i] - 'A';
        }
        arr[number]++;
    }

    int maxi = -1;
    int ans = 0;
    for(int i = 0; i < 26; i++){
        if(maxi < arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }

    char finalAns = 'a' + ans;
    return finalAns;
}

int main(){
    string s;
    cout << "Enter a word : " ;
    cin >> s;

    cout << "Maximum occurrance of a character in given string : " << getMaxChar(s);

    return 0;
}