#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int bruteForce(vector<int> &arr){
    int n = arr.size() - 1;
    sort(arr.begin(), arr.end());
    return arr[n];
}

int optimal(vector<int> &arr){
    int n = arr.size() - 1;
    int largest = arr[0];
    for(int i = 1; i <= n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}