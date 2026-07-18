#include <iostream>
#include <vector>
using namespace std;

int compress(vector<char>& chars){
    int i = 0;
    int ansInd = 0;
    int n = chars.size();

    while(i < n){
        int j = i + 1;
        while(j < n && chars[j] == chars[i]){
            j++;
        }

        chars[ansInd++] = chars[i];

        int count = j - i;

        if(count > 1){
            string cnt = to_string(count);
            for(char ch : cnt){
                chars[ansInd++] = ch;
            }
        }
        i = j;
    }
    return ansInd;
}

int main() {
    vector<char> ch = {'a','a','b','b','c','c','c'};

    int ans = compress(ch);

    cout << ans << endl;

    return 0;
}