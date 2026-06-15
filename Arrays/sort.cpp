#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

void sort(int arr[], int n){
    int i = 0;
    int j = n - 1;
    while(i < j){
        if(arr[i] == 0){
            i++;
        }
        if(arr[j] == 1){
            j--;
        }
        else{
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}

int main(){
    int num[8] = {1, 1, 0, 0, 0, 0, 1, 0};
    sort(num, 8);
    printArray(num, 8);

    return 0;
} 