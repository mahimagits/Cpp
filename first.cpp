#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter first number: a = ";
    cin >> a;
    cout << "Enter second number: b = ";
    cin >> b;
    if (a>b) {
        cout << "a is greater than b" << endl;
    } else {
        cout << "b is greater than a" << endl;
    }
    return 0;
}