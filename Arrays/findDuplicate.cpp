#include <iostream>
using namespace std;

int findDuplicate(int arr[], int size){
    int ans = 0;

    for(int i = 0; i < size; i++){
        ans = ans ^ arr[i];
    }

    for(int i = 0; i < size; i++){
        ans = ans ^ i;
    }

    return ans;
}

int main(){
    int arr[7] = {1, 2, 3, 4, 5, 6, 6};
    
    cout << "Duplicate element: " << findDuplicate(arr, 7) << endl;

    return 0;
}