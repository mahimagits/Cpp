#include <iostream>
using namespace std;

int power(int a, int b){
    int ans = 1;
    for(int i = 0; i < b; i++){
        ans = ans * a;
    }
    return ans;
}

string evenOrOdd(int num) {
    if (num % 2 == 0){
        return "Even";
    } else {
        return "Odd";
    }
}

int factorial(int num){
    int fact = 1;
    for(int i = 1; i <= num; i++){
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r){
    int num = factorial(n);
    int deno = factorial(r) * factorial(n - r);
    int ans = num/deno;
    return ans;
}

void printCounting(int n){
    for(int i = 1; i <= n; i++){
        cout << i << " ";
    }
}

bool isPrime(int n){
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    cout << power(6, 3) << endl;
    cout << evenOrOdd(6) << endl;
    cout << evenOrOdd(7) << endl;
    cout << nCr(8, 2) << endl;
    printCounting(10);
    cout << endl;
    if(isPrime(7)){
        cout << "Prime Number";
    } else {
        cout << "Not a prime number";
    }
    return 0;
}