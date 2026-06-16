#include <iostream>
using namespace std;

int firstOcc(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start)/2);
    int ans = -1;
    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        } else if(arr[mid] < key){
            start = mid + 1;
        } else{
            end = mid - 1;
        }
        mid = start + ((end - start)/2);
    }
    return ans;
}

int lastOcc(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start)/2);
    int ans = -1;
    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        } else if(arr[mid] < key){
            start = mid + 1;
        } else{
            end = mid - 1;
        }
        mid = start + ((end - start)/2);
    }
    return ans;
}

int main(){
    int num[7] = {3, 5, 6, 9, 10, 10, 10};

    pair<int, int> p;
    p.first = firstOcc(num, 7, 10);
    p.second = lastOcc(num, 7, 10);

    cout << p.first << " " << p.second << endl;

    cout << "Total no. of occurances of 10 is " << (p.second - p.first) + 1;

    return 0;
}