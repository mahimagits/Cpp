#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralPrint(vector<vector<int>>& matrix){
    vector<int> ans;
    int row = matrix.size();
    int col = matrix[0].size();
    int total = row*col;
    int count = 0;

    int startingRow = 0;
    int endingRow = row - 1;
    int startingCol = 0;
    int endingCol = col - 1;

    while(count < total){

        //Printing Starting Row
        for(int index = startingCol; index <= endingCol && count < total; index++){
            ans.push_back(matrix[startingRow][index]);
            count++;
        }
        startingRow++;

        //Printing Ending Column
        for(int index = startingRow; index <= endingRow && count < total; index++){
            ans.push_back(matrix[index][endingCol]);
            count++;
        }
        endingCol--;

        //Printing Ending Row
        for(int index = endingCol; index >= startingCol && count < total; index--){
            ans.push_back(matrix[endingRow][index]);
            count++;
        }
        endingRow--;

        //Printing Starting Column
        for(int index = endingRow; index >= startingRow && count < total; index--){
            ans.push_back(matrix[index][startingCol]);
            count++;
        }
        startingCol++;
    }

    return ans;
}

int main(){
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    vector<int> ans = spiralPrint(matrix);

    for(int num : ans){
        cout << num << " ";
    }

    return 0;
}