#include <iostream>
#include <vector>
using namespace std;

bool rotated_sorted(vector<int> &nums){
    int count = 0;
    int n = nums.size();
    for(int i = 0; i < n; i++){
        if(nums[i - 1] > nums[i]){
            count++;
        }
    }
    if(nums[n - 1] > nums[0]){
        count++;
    }

    return count <= 1;
}

int main(){
    vector <int> arr = {2, 7, 9, 10};

    cout << rotated_sorted(arr);

    return 0;
}