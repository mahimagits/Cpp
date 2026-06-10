#include <iostream>
using namespace std;

int main(){
    int a, b;
    char operation;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter operation: ";
    cin >> operation;

    switch(operation){
        case '+':
        cout << "Answer: " << a + b;
        break;
        case '-':
        cout << "Answer: " << a - b;
        break;
        case '*':
        cout << "Answer: " << a * b;
        break;
        case '/':
        cout << "Answer: " << a/b;
        break;
        case '%':
        cout << "Answer: " << a % b;
        break;
        default:
        cout << "Invalid operation";
    }

    return 0;
}