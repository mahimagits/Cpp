#include <iostream>
using namespace std;

int largestRowSum(int arr[][3], int row, int col){
    int maxi = INT32_MIN;
    int rowInd = -1;
    for(int i = 0; i < row; i++){
        int sum = 0;
        for(int j = 0; j < col; j++){
            sum += arr[i][j];
        }
        if(sum > maxi){
            maxi = sum;
            rowInd = i;
        }
    }
    cout << "The largest sum is :- " << maxi << endl;
    return rowInd;
}

int main(){
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int ind = largestRowSum(arr, 3, 3);

    cout << "Maximum Row Sum is at index :- "<< ind << endl;

    return 0;
}