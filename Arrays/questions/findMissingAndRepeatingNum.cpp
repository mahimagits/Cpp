#include <iostream>
#include <vector>
using namespace std;

vector<int> findMissingAndRepeating(vector<int> &a){
    long long n = a.size();
    long long Sn = (n * (n + 1))/2;
    long long S2n  = (n * (n + 1) * (2 * n + 1))/6;
    long long S = 0, S2 = 0;
    for(int i = 0; i < n; i++){
        S += a[i];
        S2 += (long)a[i] * (long)a[i]; 
    }
    long long val1 = S - Sn;
    long long val2 = S2 - S2n;
    val2 = val2/val1;
    long long x = (val1 + val2) / 2;
    long long y = val2 - x;
    return {(int)x, (int)y};
}

int main(){
    vector<int> nums = {4, 3, 6, 2, 1, 1};
    vector<int> ans = findMissingAndRepeating(nums);
    for(auto num : ans){
        cout << num << " ";
    }

    return 0;
}