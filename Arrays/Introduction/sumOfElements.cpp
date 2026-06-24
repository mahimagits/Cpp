#include <iostream>
using namespace std;

int getSum(int arr[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int size;
    cout << "Enter size of an array: ";
    cin >> size;

    int arr[100];

    for(int i = 0; i < size; i++){
        cout << "Enter array elements: ";
        cin >> arr[i];
    }

    cout << "\nSum of all elements in an array: " << getSum(arr, size) << endl;

    return 0;
}