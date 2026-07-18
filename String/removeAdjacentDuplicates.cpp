#include <iostream>
using namespace std;

string removeAdjacentDuplicates(string s){
    string ans = "";

    int i = 0;
    
    for(int j = 0; j < s.size(); j++){
        s[i] = s[j];

        if(i > 0 && s[i] == s[i - 1])
            i = i - 2;
        i++;
    }
    return s.substr(0, i);
}

int main(){
    string s = "abbaca";
    string ans = removeAdjacentDuplicates(s);

    cout << ans << endl;

    return 0;
}