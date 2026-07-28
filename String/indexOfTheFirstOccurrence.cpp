#include <iostream>
#include <string>
using namespace std;

int strStr(string haystack, string needle){
    for(int i = 0; i + needle.length() <= haystack.length(); i++){
        if(haystack.substr(i, needle.length()) == needle){
            return i;
        }
    }
    return -1;
}

int main(){
    string s1 = "madsadbutsad";
    string s2 = "sad";

    cout << "Index : " << strStr(s1, s2);

    return 0;
}