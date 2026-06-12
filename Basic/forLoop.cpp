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

    //Fibonacci series
    int n = 10, a = 0, b = 1;
    cout << a << " " << b << " ";
    for(int i = 1; i <= n; i++){
        int nextNum = a + b;
        cout << nextNum << " ";
        a = b;
        b = nextNum;
    }

    //Prime Number
    int n;
    bool isPrime = true;
    cout << "Enter a number: ";
    cin >> n;
    for(int i = 2; i < n; i++){
        if(n%i == 0){
            isPrime = false;
        }
    }
    if(isPrime){
        cout << "Prime Number";
    }else{
        cout << "Non Prime Number";
    }

    return 0;
}