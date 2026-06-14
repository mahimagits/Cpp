#include <iostream>
using namespace std;

int findUnique(int arr[], int size){
    int ans = 0;

    for(int i = 0; i < size; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(){
    int arr[7] = {1, 3, 9, 3, 1, 6, 9};

    cout << "Unique element: " << findUnique(arr, 7) << endl;

    return 0;
}