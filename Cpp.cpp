#include <iostream>
using namespace std;

int main() {
    int fact = 1, n, i = 1;
    cout << "Enter a number: ";
    cin >> n;

    while(i <= n) {
        fact *= i;
        i++;
        cout << fact<<"\n";
    }
    
    return 0;
}