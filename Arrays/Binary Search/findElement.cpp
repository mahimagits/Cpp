#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start)/2);
    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid] < key){
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = start + ((end - start)/2);
    }
    return -1;
}

int main() {
    int even[6] = {2, 4, 7, 9, 10, 17};
    int odd[5] = {2, 4, 7, 9, 10};

    int evenIndex = binarySearch(even, 6, 10);

    cout << "Index of 10 is " << evenIndex << endl;

    int oddIndex = binarySearch(odd, 5, 4);

    cout << "Index of 4 is " << oddIndex << endl;

    return 0;
}