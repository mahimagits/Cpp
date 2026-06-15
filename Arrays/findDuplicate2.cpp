#include <iostream>
using namespace std;

void findDuplicate(int arr[], int size){
    for(int i = 0; i < size; i++){
        int element = arr[i];
        for(int j = i + 1; j < size; j++){
            if(element == arr[j]){
                cout << element << " ";
                break;
            }
        } 
    }
}

int main(){
    int arr[5] = {1, 5, 2, 2, 5};
    findDuplicate(arr, 5);

    return 0;
}