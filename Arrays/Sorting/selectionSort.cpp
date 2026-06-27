#include <iostream>
#include <vector>
using namespace std;

void printVector(vector <int> &arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

void selectionSort(vector<int> &arr, int n){
    for(int i = 0; i < n - 1; i++){
        int minInd = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[minInd]){
                minInd = j;
            }
        }
        swap(arr[i], arr[minInd]);
    }
}

int main(){
    vector<int> num = {24, 10, 15, 2, 0, 74};

    cout << "Before Sorting: " << endl;
    printVector(num, num.size());

    selectionSort(num, num.size());
    cout << "\nAfter Sorting: " << endl;
    printVector(num, num.size());

    return 0;
}