#include <iostream>
using namespace std;

void moveZeros(int arr[], int n){
    int k = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            swap(arr[k], arr[i]);
            k++;
        } else {
            continue;
        }
    }
}

int main(){
    int arr[5] = {2, 0, 4, 0, 5};

    moveZeros(arr, 5);

    for(auto i : arr){
        cout << i << " ";
    }

    return 0;
}