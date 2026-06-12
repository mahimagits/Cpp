#include <iostream>
using namespace std;

//Binary to Decimal

int main(){
    int n;
    cout << "Enter a binary number : ";
    cin >> n;
    int ans = 0, power = 1;
    while(n != 0){
        int rem = n % 10;
        ans += (rem * power);
        n = n/10;
        power *= 2;
    }
    cout << "Decimal Number : " << ans << endl;
    return 0;
}