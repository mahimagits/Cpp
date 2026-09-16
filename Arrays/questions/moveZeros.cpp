#include <iostream>
using namespace std;

void moveZeros(int arr[], int n){
    int j = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }
    for(int i = j + 1; i < n; i++){
        if(arr[i] != 0){
            swap(arr[j], arr[i]);
            j++;
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