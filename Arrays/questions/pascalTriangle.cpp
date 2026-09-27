#include <iostream>
using namespace std;

int getElement(int row, int col){
    int n = row - 1;
    int r = col - 1;
    long long ans = 1;
    for(int i = 0; i < r; i++){
        ans = ans * (n - i);
        ans = ans/(i + 1);
    }
    return ans;
}

void printRow(int row){
    int ans = 1;
    cout << ans << " ";
    for(int i = 1; i < row; i++){
        ans = ans * (row - i);
        ans = ans/i;
        cout << ans << " ";
    }
}

int main(){
    int row = 5;
    int col = 3;
    cout << getElement(row, col) << endl;
    printRow(5);

    return 0;
}