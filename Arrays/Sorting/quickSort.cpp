#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> &arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int partitionInd(vector<int>& arr, int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i < j){
        while(arr[i] <= pivot && i <= high){
            i++;
        }
        while(arr[j] > pivot && j >= low){
            j--;
        }
        if(i < j){
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(vector<int>& arr, int low, int high){
    if(low < high){
        int pInd = partitionInd(arr, low, high);
        quickSort(arr, low, pInd-1);
        quickSort(arr, pInd + 1, high);
    }
}

int main(){
    vector<int> nums = {4, 19, 3, 17, 30, 78};

    cout << "Before sorting: " << endl;
    printVector(nums, nums.size());

    cout << "\nAfter Sorting: " << endl;
    quickSort(nums, 0, nums.size() - 1);
    printVector(nums, nums.size());

    return 0;
}