#include <iostream>
using namespace std;

bool isPossible(int arr[], int n, int k, int mid){
    int painterCount = 1;
    int time = 0;

    for(int i = 0; i < n; i++){
        if(time + arr[i] <= mid){
            time += arr[i];
        } else {
            painterCount++;
            if(painterCount > k || arr[i] > mid){
                return false;
            }
            time = arr[i];
        }
    }
    return true;
}

int painterPartition(int arr[], int n, int k){
    int s = 0;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    int e = sum;
    int mid = s + (e - s)/2;
    int ans = -1;
    while(s <= e){
        if(isPossible(arr, n, k, mid)){
            ans = mid;
            e = mid - 1;
        } else {
            s = mid + 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}

int main(){
    int walls[4] = {10, 20, 30, 40};
    int k = 2;
    
    cout << painterPartition(walls, 4, k);

    return 0;
}