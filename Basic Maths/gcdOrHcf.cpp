#include <iostream>
using namespace std;

int gcd(int n1, int n2){
    int ans = 1;
    for(int i = 2; i <= n1; i++){
        if(n1%i == 0 && n2%i == 0){
            ans = i;
        }
    }

    return ans;
}

int main(){
    int n1 = 9;
    int n2 = 12;

    cout << "GCD :- " << gcd(9, 12) << endl;

    return 0;
}