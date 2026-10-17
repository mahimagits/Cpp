#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &nums, int low, int high, int target){
    if(low > high) return -1;
    int mid = low + (high - low)/2;
    if(nums[mid] == target) return mid;
    else if (nums[mid] > target) return binarySearch(nums, low, mid - 1, target);
    else return binarySearch(nums, mid + 1, high, target);
}

int main(){
    vector<int> nums = {3, 4, 6, 7, 9, 12, 16, 17};
    cout << binarySearch(nums, 0, 7, 9);

    return 0;
}