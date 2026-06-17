#include <iostream>
using namespace std;

int peakIndexInMountainArray(int arr[], int size){
    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start)/2);
    while(start < end){
        if(arr[mid] > arr[mid - 1] & arr[mid] > arr[mid + 1]){
            return mid;
        } else if(arr[mid] < arr[mid - 1]){
            end = mid;
        } else if(arr[mid] < arr[mid + 1]){
            start = mid + 1;
        }
        mid = start + ((end - start)/2);
    }
}

int main() {
    int num[7] = {3, 5, 7, 9, 11, 13, 1};

    cout << "Peak Index in mountain array: " << peakIndexInMountainArray(num, 7) << endl;

    return 0;
}