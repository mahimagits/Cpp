#include <iostream>
#include <vector>
using namespace std;

void rotateArray(vector<int> &arr, int k){
    int n = arr.size();
    vector<int> temp(n);
    for(int i = 0; i < n; i++){
        temp[(i + k) % n] = arr[i];
    }

    arr = temp;
}

int main(){
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    rotateArray(nums, k);

    for(auto i : nums){
        cout << i << " ";
    }

    return 0;
}