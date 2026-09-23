#include <iostream>
#include <vector>
using namespace std;

int longestSubarray(vector<int> &arr, int k){
    int len = 0;
    for(int i = 0; i < arr.size(); i++){
        int sum = 0;
        for(int j = i; j < arr.size(); j++){
            sum += arr[j];
            if(sum == k){
            len = max(len, ((j - i) + 1));
            }
        }
    }
    return len;
}

int main(){
    int k = 3;
    vector<int> arr = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};

    cout << longestSubarray(arr, k);

    return 0;
}
