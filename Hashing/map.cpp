#include <iostream>
#include <map>
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 2, 1};

    map<int, int> mpp;
    for(int i = 0; i < 5; i++){
        mpp[arr[i]]++;
    }

    int n;
    cout << "enter a number : ";
    cin >> n;
    cout << "Number of times it appears in the given array : " << mpp[n] << endl;

    return 0;
}