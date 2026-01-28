#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 18) {
        cout << "Can Vote";
    }else {
        cout << "Cannot Vote";
    }
    return 0;
}