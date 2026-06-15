#include <iostream>
using namespace std;

void tripletSum(int arr[], int size, int t){
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            for(int k = j + 1; k < size; k++){
                if(t == arr[i] + arr[j] + arr[k]){
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << " " << endl;
                }
            }
        }
    }
}

int main(){
    int t = 12;
    int num[5] = {1, 2, 3, 4, 5};

    tripletSum(num, 5, t);

    return 0;
}