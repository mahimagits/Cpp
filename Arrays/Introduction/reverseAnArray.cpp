#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

void reverse(int arr[], int size){
    int start = 0;
    int end = size - 1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};

    cout << "Before reverse: " << endl;
    printArray(arr, 5);

    cout << "\nAfter reverse: " << endl;
    reverse(arr, 5);
    printArray(arr, 5);

    return 0;
}