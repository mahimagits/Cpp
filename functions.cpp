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

int nCr(int n, int r){
    int num = 1;
    for(int i = n; i > 0; i--){
        num *= i;
    }
    int den1 = 1;
    for(int i = r; i > 0; i--){
        den1 *= i;
    }
    int den2 = 1;
    for(int i = (n - r); i > 0; i--){
        den2 *= i;
    }
    int ans = (num)/(den1 * den2);
    return ans;
}

int main(){
    cout << power(6, 3) << endl;
    cout << evenOrOdd(6) << endl;
    cout << evenOrOdd(7) << endl;
    cout << nCr(8, 2) << endl;

    return 0;
}