#include <iostream>
using namespace std;

void sort0_1(int arr[], int size){
    for(int i = 0; i < size; i++){
        if(arr[i] == 0){
            cout << arr[i] << " ";
        }
    }
    for(int i = 0; i < size; i++){
        if(arr[i] == 1){
            cout << arr[i] << " ";
        }
    }
}

int main(){
    int num[5] = {0, 1, 0, 1, 0};
    sort0_1(num, 5);

    return 0;
}