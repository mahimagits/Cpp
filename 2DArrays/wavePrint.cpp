#include <iostream>
using namespace std;

void wavePrint(int arr[][2], int row, int col){
    for(int i = 0; i < col; i++){
        if(i % 2 == 0){
            for(int j = 0; j < row; j++){
                cout << arr[j][i] << " ";
            }
        }
        if(i % 2 != 0){
            for(int j = (row - 1); j >= 0; j--){
                cout << arr[j][i] << " ";
            }
        }
    }
}

int main(){
    int arr[2][2] = {1, 2, 3, 4};

    wavePrint(arr, 2, 2);

    return 0;
}