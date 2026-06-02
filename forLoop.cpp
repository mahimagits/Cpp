#include <iostream>
using namespace std;

int main() {
    //Counting from 1 to n
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        cout << i << " ";
    }

    //Sum from 1 to n;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    cout << "Sum: " << sum << endl;
    return 0;
}