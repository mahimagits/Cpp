#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int>& nums, int val){
    int n = nums.size();
    int j = 0;
    for(int i = 0; i < n; i++){
        if(nums[i] != val && j < n){
            nums[j++] = nums[i];
        }
    }
    return j;
}

int main(){
    vector<int> nums = {2, 3, 2, 3, 1, 7, 5};
    int val = 3;

    cout << removeElement(nums, val);

    return 0;
}