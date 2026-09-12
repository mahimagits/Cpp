#include <iostream>
using namespace std;

int gcd(int n1, int n2){
    int ans = 1;
    for(int i = 2; i <= min(n1, n2); i++){
        if(n1%i == 0 && n2%i == 0){
            ans = i;
        }
    }

    return ans;
}

int anotherApproach(int n1, int n2){
    int ans = 1;
    for(int i = min(n1, n2); i >= 1; i--){
        if(n1 % i == 0 && n2 % i == 0){
            ans = i;
            break;
        }
    }

    return ans;
}

int euclideanAlgorithm(int n1, int n2){
    while(n1 > 0 && n2 > 0){
        if(n1 > n2) n1 %= n2;
        else n2 %= n1;
    }

    if(n1 == 0) return n2;
    return n1;
}

int main(){
    int n1 = 52;
    int n2 = 10;

    cout << "GCD :- " << gcd(n1, n2) << endl;

    cout << anotherApproach(n1, n2) << endl;

    cout << euclideanAlgorithm(n1, n2) << endl;

    return 0;
}