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

int decToBin(int n){
    int ans = 0, power = 1;
    while (n != 0){
        int digit = n % 2;
        ans += digit * power;
        power *= 10;
        n = n/2;
    }
    return ans;
}

int numOfBits(int n){
    int bin = decToBin(n);
    int count = 0;
    while (bin > 0){
        int digit = bin % 10;
        if (digit == 1){
            count++;
        }
        bin = bin / 10;
    }
    return count;
} 

int fibnacci(int n){
    int a = 0, b = 1;
    int fib;
    for(int i = 2; i < n; i++){
        fib = a + b;
        a = b;
        b = fib;
    }
    return fib;
}

int main(){
    cout << fibnacci(5) << endl;
    return 0;
}