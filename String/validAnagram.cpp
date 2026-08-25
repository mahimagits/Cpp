#include <iostream>
using namespace std;

bool validAnagram(string s, string t){
    if(s.length() != t.length()){
        return false;
    }

    int freq[26] = {0};

    for(int i = 0; i < s.length(); i++){
        freq[s[i] - 'a']++;
        freq[t[i] - 'a']--;
    }

    for(int i = 0; i < 26; i++){
        if(freq[i] != 0)
            return false;
    }

    return true;
}

int main(){
    string s = "cat";
    string t = "car";

    cout << validAnagram(s, t);

    return 0;
}