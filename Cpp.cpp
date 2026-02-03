#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for(int i = 2; i < n; i++){
        if (n%i == 0){
            cout << "The given number is not a prime number";
            break;
        } else {
            cout << "The given number is a PRIME NUMBER";
            break;
        }
    }
    return 0;
}

