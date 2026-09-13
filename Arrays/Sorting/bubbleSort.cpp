#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> &arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

void bubbleSort(vector<int> &arr){
    int n = arr.size();
    for(int i = (n - 1); i >= 1; i--){
        bool didSwap = 0;
        for(int j = 0; j <= (i-1); j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                didSwap = 1;
            }
            if(didSwap){
                break;
            }
        }
    }
}

int main(){
    vector<int> nums = {4, 19, 3, 17, 30, 78};

    cout << "Before sorting: " << endl;
    printVector(nums, nums.size());

    cout << "\nAfter Sorting: " << endl;
    bubbleSort(nums);
    printVector(nums, nums.size());

    return 0;
}