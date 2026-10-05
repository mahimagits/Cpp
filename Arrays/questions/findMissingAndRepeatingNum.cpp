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

vector<int> anotherApproach(vector<int> nums){
    int n = nums.size();
    int xr = 0;
    for(int i = 0; i < n; i++){
        xr = xr ^ nums[i];
        xr = xr ^ (i+1);
    }

    int number = xr & ~(xr - 1);

    int one = 0, zero = 0;
    for(int i = 0; i < n; i++){
        if((nums[i] & number) != 0){
            one = one ^ nums[i];
        } else {
            zero = zero ^ nums[i];
        }
        if(((i+1) & number) != 0){
            one = one ^ (i+1);
        } else {
            zero = zero ^ (i+1);
        }
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(nums[i] != one) return{zero, one};
        return {one, zero};
    }

}

int main(){
    vector<int> nums = {4, 3, 6, 2, 1, 1};
    vector<int> ans = findMissingAndRepeating(nums);
    for(auto num : ans){
        cout << num << " ";
    }

    cout << endl;

    vector<int> ans2 = anotherApproach(nums);
    for(auto n : ans2){
        cout << n << " ";
    }

    return 0;
}