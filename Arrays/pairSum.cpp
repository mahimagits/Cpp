#include <iostream>
using namespace std;

void pairSum(int arr[], int size, int s){
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if(s == arr[i] + arr[j]){
                cout << min(arr[i], arr[j]) << " " << max(arr[i], arr[j]) << endl;
            }
        }
    }
}

int main(){
    int s = 0;
    int num[5] = {2, -3, 3, -3, -2};

    pairSum(num, 5, s);

    return 0;
}