#include <iostream>
#include <vector>
#include <map>
using namespace std;

int brute(vector<int> &arr, int k){
    int n = arr.size();
    int cnt = 0;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){
            sum += arr[j];
            if(sum == k){
                cnt++;
            }
        }
    }
    return cnt;
}

int optimal(vector<int> &arr, int k){
    int n = arr.size();
    map<int, int> mpp;
    mpp[0] = 1;
    int sum = 0;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        int rem = sum - k;
        cnt += mpp[rem];
        mpp[sum] += 1;
    }
    return cnt;
}

int main(){
    vector<int> arr = {1, 2, 3, -3, 1, 1, 1, 4, 2, -3};
    int k = 3;

    cout << brute(arr, k) << endl;
    cout << optimal(arr, k) << endl;

    return 0;
}