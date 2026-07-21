#include <iostream>
using namespace std;

bool isPresent(int arr[][3], int target, int row, int col){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(target == arr[i][j]){
                return 1;
            }
        }
    }
    return 0;
}


int main(){
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    if(isPresent(arr, 5, 3, 3)){
        cout << "Element Found" << endl;
    } else {
        cout << "Element Not Found" << endl;
    }

    return 0;
}