#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> &arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

void merge(vector<int>& arr, int low, int mid, int high){
    vector<int> temp;

    int left = low;
    int right = mid + 1;
    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }

    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = low; i <= high; i++){
        arr[i] = temp[i - low];
    }

}

void mergeSort(vector<int>& arr, int low, int high){
    if(low >= high) return;

    int mid = low + (high - low)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);

}

int main(){
    vector<int> nums = {4, 19, 3, 17, 30, 78};

    cout << "Before sorting: " << endl;
    printVector(nums, nums.size());

    cout << "\nAfter Sorting: " << endl;
    mergeSort(nums, 0, nums.size() - 1);
    printVector(nums, nums.size());

    return 0;
}