#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target){
    int row = matrix.size();
    int col = matrix[0].size();

    int rowInd = 0;
    int colInd = col - 1;
    while(rowInd < row && colInd >= 0){
        int element = matrix[rowInd][colInd];
        if(element == target){
            return 1;
        } else if (element < target){
            rowInd++;
        } else {
            colInd--;
        }
    }
    return 0;
}

int main(){
    vector<vector<int>> matrix = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    int target = 99;

    cout << target << " is present or not : " << searchMatrix(matrix, target);

    return 0;
}