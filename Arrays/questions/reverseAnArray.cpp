#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6};

    cout << "Before Reversing :- " << endl;
    for(auto i : arr){
        cout << i << " ";
    }

    cout << "\nAfter Reversing :- " << endl;
    reverse(arr.begin(), arr.end());
    for(auto i : arr){
        cout << i << " ";
    }

    return 0;
}