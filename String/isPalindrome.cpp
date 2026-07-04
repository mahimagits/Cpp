#include <iostream>
using namespace std;

char toLowerCase(char ch){
    if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')){
        return ch;
    } else {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool valid(char ch){
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')){
        return 1;
    }
    return 0;
}

bool isPalindrome(string s){
    string temp = "";
    for(int i = 0; i < s.length(); i++){
        if(valid(s[i])){
            temp.push_back(s[i]);
        }
    }

    int start = 0;
    int end = temp.length() - 1;
    while(start <= end){
        if(toLowerCase(temp[start]) != toLowerCase(temp[end])){
            return false;
        } else {
            start ++ ;
            end -- ;
        }
    }
    return true;
}


int main(){
    string s = "No#on";

    cout << "Palindrome or not : " << isPalindrome(s);

    return 0;
}