#include <iostream>
#include <vector>
#include <map>
using namespace std;

int bruteForce(vector<int> &arr, long long k){
    int len = 0;
    for(int i = 0; i < arr.size(); i++){
        long long sum = 0;
        for(int j = i; j < arr.size(); j++){
            sum += arr[j];
            if(sum == k){
            len = max(len, ((j - i) + 1));
            }
        }
    }
    return len;
}

int better(vector<int> &a, long long k){
    map <long long, int> preSumMap;
    long long sum = 0;
    int maxLen = 0;
    for(int i = 0; i < a.size(); i++){
        sum += a[i];
        if(sum == k){
            maxLen = max(maxLen, i+1);
        }
        long long rem = sum - k;
        if(preSumMap.find(rem) != preSumMap.end()){
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }
        if(preSumMap.find(rem) == preSumMap.end()){
            preSumMap[sum] = i;
        } 
    }
    return maxLen;
}

int optimal(vector<int> &a, long long k){
    int left = 0;
    int right = 0;
    long long sum = a[0];
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
    long long k = 6;
    vector<int> arr = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};

    cout << bruteForce(arr, k) << endl;
    cout << better(arr, k) << endl;
    cout << optimal(arr, k) << endl;

    return 0;
}
