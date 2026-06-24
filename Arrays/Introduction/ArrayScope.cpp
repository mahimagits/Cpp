#include <iostream>
using namespace std;

void update(int arr[], int n){
    arr[0] = 120;

    cout << "Printing array in update function" << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[3] = {1, 2, 3};

    cout << "Printing array in main function before update" << endl;
    for(int i = 0; i < 3; i++){
        cout << arr[i] << " ";
    }

    cout << "\nUpdating" << endl;
    update(arr, 3);

    cout << "\nPrinting array in main function after update" << endl;
    for(int i = 0; i < 3; i++){
        cout << arr[i] << " ";
    }

    return 0;
}