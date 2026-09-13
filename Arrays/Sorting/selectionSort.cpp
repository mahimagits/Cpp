#include <iostream>
#include <vector>
using namespace std;

void printVector(vector <int> &arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

void selectionSort(vector<int> &arr){
    int n = arr.size();
    for(int i = 0; i <= (n-2); i++){
        int mini = i;
        for(int j = i; j <= (n-1); j++){
            if(arr[j] < arr[mini]){
                mini = j;
            }
        }
        swap(arr[i], arr[mini]);
    }
} 

int main(){
    vector<int> num = {24, 10, 15, 2, 0, 74};

    cout << "Before Sorting: " << endl;
    printVector(num, num.size());

    selectionSort(num);
    cout << "\nAfter Sorting: " << endl;
    printVector(num, num.size());

    return 0;
}