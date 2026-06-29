#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reverseAnSubarray(vector<int> &arr, int m){
    int n = arr.size();
    int start = m + 1;
    int end = n - 1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    vector<int> arr = {10, 4, 5, 2, 3, 6, 1, 3, 6};
    int m = 3;

    reverseAnSubarray(arr, m);

    for(auto i : arr){
        cout << i << " " ;
    }

    return 0;
}

