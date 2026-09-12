#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1, 3, 1, 2, 3};

    int hash[13] = {0};
    for(int i = 0; i < 5; i++){
        hash[arr[i]] += 1;
    }

    int q = 3;
    while(q--){
        int number;
        cin >> number;

        cout << hash[number] << endl;
    }

    return 0;
}