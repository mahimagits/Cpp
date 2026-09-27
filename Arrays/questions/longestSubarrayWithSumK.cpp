#include <iostream>
#include <vector>
#include <map>
using namespace std;

int bruteForce(vector<int> &arr, int k){
    int len = 0;
    int n = arr.size();
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){
            sum += arr[j];
            if(sum == k){
                len = max(len, (j - i + 1));
            }
        }
    }
    return len;
}

int better(vector<int> &a, int k){
    map<int, int> preSumMap;
    int n = a.size();
    int sum = 0;
    int maxLen = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
        if(sum == k){
            maxLen = max(maxLen, i+1);
        }
        int rem = sum - k;
        if(preSumMap.find(rem) != preSumMap.end()){
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }
        if(preSumMap.find(sum) == preSumMap.end())
            preSumMap[sum] = i;
    }
    return maxLen;
}

int optimal(vector<int> &a, int k){
    int left = 0;
    int right = 0;
    int sum = a[0];
    int maxLen = 0;
    int n = a.size();
    while(right < n){
        while(left < right && sum > k){
            sum -= a[left];
            left++;
        }
        if(sum == k){
            maxLen = max(maxLen, ((right - left) + 1));
        }
        right++;
        if(right < n){
            sum += a[right];
        }
    }
    return maxLen;
}

int main(){
    int k = 6;
    vector<int> arr = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};

    // cout << bruteForce(arr, k) << endl;
    cout << better(arr, k) << endl;
    // cout << optimal(arr, k) << endl;

    return 0;
}
