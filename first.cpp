#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number:";
    cin >> n;
    for (int i = 0; i < n; i++){
        int m = n;
        for (int j = 0; j < m; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}