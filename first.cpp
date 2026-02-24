#include <iostream>
using namespace std;

int main(){
    // int decNum;
    // cout << "Enter a decimal number:";
    // cin >> decNum;
    // int ans = 0, pow = 1;
    // while (decNum > 0){
    //     int rem = decNum%2;
    //     decNum = decNum / 2;
    //     ans += rem*pow;
    //     pow *= 10;
    // }
    // cout << ans;

    int binNum;
    cout << "Enter a binary number:";
    cin >> binNum;
    int ans = 0, pow = 1;
    while (binNum > 0){
        int rem = binNum%10;
        binNum = binNum / 10;
        ans += rem*pow;
        pow *= 2;
    }
    cout << ans;
}
