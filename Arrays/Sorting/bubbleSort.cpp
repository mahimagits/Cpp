#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> &arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

void bubbleSort(vector<int> &arr, int n){
    for(int i = 1; i < n; i++){
        for(int j = 0; j < n-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){
    vector<int> nums = {4, 19, 3, 17, 30, 78};

    cout << "Before sorting: " << endl;
    printVector(nums, nums.size());

    cout << "\nAfter Sorting: " << endl;
    bubbleSort(nums, nums.size());
    printVector(nums, nums.size());

    return 0;
}