#include <iostream>
#include <algorithm>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[]){
    int i = 0, j = 0, k = 0;
    while(i < n && j < m){
        if(arr1[i] < arr2[j]){
            arr3[k++] = arr1[i++];
        } else {
            arr3[k++] = arr2[j++];
        }
    }
    while(i < n){
        arr3[k++] = arr1[i++];
    }
    while(j < m){
        arr3[k++] = arr2[j++];
    }
}

int main(){
    int num1[6] = {1,2,3,5,8,9};
    int num2[3] = {2,5,6};

    int num3[9];

    merge(num1, 6, num2, 3, num3);


    for(int i = 0; i < 9; i++){
        cout << num3[i] << " ";
    }

    return 0;
}