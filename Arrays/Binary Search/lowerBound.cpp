#include <iostream>
#include <vector>
using namespace std;

int lowerBound(vector<int> &nums, int target){
    int ans;
    int mini = nums.size();
    int low = 0;
    int high = nums.size() - 1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(nums[mid] >= target){
            ans = mid;
            mini = min(mini, ans);
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    
    return mini;
}

int main(){
    vector<int> nums = {3, 4, 6, 8, 9, 9, 9};

    cout << lowerBound(nums, 3);

    return 0;
}