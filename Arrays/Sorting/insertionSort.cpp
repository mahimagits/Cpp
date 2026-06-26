#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> &arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

void insertionSort(vector<int> &arr, int n){
    int i = 1;
    while(i < n){
        int temp = arr[i];
        int j = i - 1;
        while(j >= 0){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            } else {
                break;
            }
            j--;
        }
        arr[j+1] = temp;
        i++;
    }
}

int main(){
    vector<int> num = {10, 1, 7, 9, 3, 16};

    cout << "Before Sorting: "<<endl;
    printVector(num, num.size());

    cout << "\nAfter Sorting" << endl;
    insertionSort(num, num.size());
    printVector(num, num.size());

    return 0;
}