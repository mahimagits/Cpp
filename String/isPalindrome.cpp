#include <iostream>
using namespace std;

bool isPalindrome(char s[], int n){
    int start = 0;
    int end = n - 1;
    while(start <= end){
        if(s[start] != s[end]){
            return false;
        } else {
            start ++ ;
            end -- ;
        }
    }
    return true;
}

int length(char s[]){
    int count = 0;
    for(int i = 0; s[i] != '\0'; i++){
        count++;
    }
    return count;
}

int main(){
    char s[20];
    cout << "Enter any word : ";
    cin >> s;

    int len = length(s);

    cout << "Palindrome or not : " << isPalindrome(s, len);

    return 0;
}