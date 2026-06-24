#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

//Built-in swap() function
void swapAlternate(int arr[], int size){
    for(int i = 0; i < size - 1; i += 2){
        swap(arr[i], arr[i + 1]);
    }
}

//Without swap() function
void SwapAlternate(int arr[], int size){
    for(int i = 0; i < size - 1; i += 2){
        int temp = arr[i + 1];
        arr[i + 1] = arr[i];
        arr[i] = temp;
    }
}

int main(){
    int num[6] = {1, 2, 3, 4, 5, 6};

    cout << "Before Swapping: " << endl;
    printArray(num, 6);

    cout << "\nAfter Swapping with swap() function: " << endl;
    swapAlternate(num, 6);
    printArray(num, 6);

    cout << "\nSwapping without swap() function: " << endl;
    SwapAlternate(num, 6);
    printArray(num, 6);

    return 0;
}