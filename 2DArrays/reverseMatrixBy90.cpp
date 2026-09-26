#include <iostream>
#include <vector>
using namespace std;

void printMatrix(vector<vector<int>> &matrix){
    int row = matrix.size();
    int col = matrix[0].size();
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void transpose(vector<vector<int>> &matrix){
    int row = matrix.size();
    int col = matrix[0].size();
    for(int i = 0; i < row; i++){
        for(int j = i+1; j < col; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }    
}

void reverseRow(vector<vector<int>> &matrix){
    int nrow = matrix.size();
    int ncol = matrix[0].size();
    for(int i = 0; i < nrow; i++) {
        int left = 0;
        int right = ncol - 1;

        while(left < right) {
            swap(matrix[i][left], matrix[i][right]);
            left++;
            right--;
        }
    }
}

void reverseMatrix(vector<vector<int>> &matrix){
    transpose(matrix);
    reverseRow(matrix);
}

int main(){
    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    printMatrix(matrix);
    cout << endl << "Reversing Matrix By 90 degrees : " << endl;
    reverseMatrix(matrix);
    printMatrix(matrix);

    return 0;
}