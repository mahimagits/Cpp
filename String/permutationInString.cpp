#include <iostream>
#include <vector>
using namespace std;

bool checkInclusion(string s1, string s2){

    if(s1.length() > s2.length()){
        return false;
    }

    vector <int> cnt1{26, 0}, cnt2{26, 0};

    for(int i = 0; i < s1.length(); i++){
        cnt1[s1[i] - 'a']++;
        cnt2[s2[i] - 'a']++;
    }

    if(cnt1 == cnt2){
        return true;
    }

    int left = 0;
    for(int right = s1.length(); right < s2.length(); right++){
        cnt2[s2[right] - 'a']++;
        cnt2[s2[left] - 'a']--;

        left++;

        if(cnt1 == cnt2){
            return true;
        }
    }

    return false;
}

int main(){
    string s1 = "ab";
    string s2 = "eidbaooo";

    cout << checkInclusion(s1, s2);

    return 0;
}