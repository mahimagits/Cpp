#include <iostream>
using namespace std;

int getPivot(int arr[], int size){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    while(start < end){
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        } else {
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;
}

int binarySearch(int arr[], int start, int end, int key){
        int s = start;
        int e = end;
        int mid = s + (e - s)/2;
        while(s <= e){
            if(key == arr[mid]){
                return mid;
            } else if(key < arr[mid]){
                e = mid - 1;
            } else {
                s = mid + 1;
            }
            mid = s + (e - s)/2;
        }
        return -1;
    }
    


int main(){
    int arr[5] = {7, 9, 1, 2, 3};
    int pivot = getPivot(arr, 5);
    int key = 1;
    if(key >= arr[pivot] && key <= arr[4]){
        cout << "Key is present at index: " << binarySearch(arr, pivot, 4, key) << endl;
    } else {
        cout << "Key is present at index: " << binarySearch(arr, 0, (pivot - 1), key) << endl;
    }

    return 0;
}