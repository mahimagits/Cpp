#include <iostream>
using namespace std;

int getMin(int arr[], int n){
    int minimum = INT32_MAX;

    for(int i = 0; i < n; i++){

        minimum = min(minimum, arr[i]);  //built-in function
        // if(arr[i] < min){
        //     min = arr[i];
        // }
    }

    return minimum;
}

int getMax(int arr[], int n){
    int maximum = INT32_MIN;

    for(int i = 0; i < n; i++){

        maximum = max(maximum, arr[i]);  //built-in function
        // if(arr[i] > max){
        //     max = arr[i];
        // }
    }

    return maximum;
}

int main(){
    int size;
    cout << "Enter size of an array: ";
    cin >> size;

    int num[100];

    for(int i = 0; i < size; i++){
        cout << "Enter array elements: ";
        cin >> num[i];
    }

    cout << "\nMaximum element: " << getMax(num, size) << endl;
    cout << "Minimum element: " << getMin(num, size) << endl;

    return 0;
}