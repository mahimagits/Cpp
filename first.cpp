#include <iostream>
using namespace std;

//function definition
int printHello(){
    cout << "Hello World\n";
    return 3;
}

//Calculate sum of two numbers
// int calcSum(int a, int b){
//     return a+b;
// }

// calculate minimum of two numbers
int min(int a, int b){
    if(a > b){
        return b;
    }else {
        return a;
    }
}

// Calculate sum of numbers from 1 to n
int calcSum(int n){
    int sum = 0;
    for(int i = 0; i <=n; i++){
        sum += i;
    }
    return sum;
}

int calcFact(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

int calcDigitSum(int num){
    int digitSum = 0;
    while(num > 0){
        int n = num % 10;
        digitSum += n;
        num = num/10;
    }
    return digitSum;
}

int calcBinCoeff(int n, int r){
    if(n > r){
    int nFact = 1;
    for(int i = 1; i <= n; i++){
        nFact *= i;
    }
    int rFact = 1;
    for(int i = 1; i <= r ; i++){
        rFact *= i;
    }
    int fact = 1;
    for(int i = 1; i <= (n-r); i++){
        fact *= i;
    }
    return nFact/(rFact*fact);
    } else {
        return false;
    }
}

void isPrime(int n){
    for(int i = 2; i < n; i++){
        if (n%i == 0){
            cout << "Non Prime Number";
            break;
        }else{
            cout << "Prime Number";
            break;
        }
    }
}

void primeNum(int n){
    for(int i = 2; i < n; i++){
        if(n%i == 0){
            i++;
        }else{
            cout << i << endl;
        }
    }
}
int main(){
    int n = 5;
    int num = 2;
    while (num)
}