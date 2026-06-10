#include <iostream>
using namespace std;

int main(){
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    // int sum = 0, prod = 1;
    // while(n > 0){
    //     int digit = n % 10;
    //     sum += digit;
    //     prod *= digit;
    //     n /= 10;
    // }
    // int diff = prod - sum;
    // cout << "Difference = " << diff << endl;

    // int n;
    // cout << "Enter a decimal number: ";
    // cin >> n;
    // int ans = 0, pow = 1;
    // while(n != 0){
    //     int digit = n % 2;
    //     ans += (digit * pow);
    //     pow *= 10;
    //     n /= 2;
    // }
    // int count = 0;
    // while(ans > 0){
    //     int rem = ans % 10;
    //     if( rem == 1){
    //         count ++ ;
    //     }
    //     ans = ans/10;
    // }
    // cout << "Count = " << count << endl;

    //Complement of Base - 10 integer
    int n;
    cout << "enter a number: ";
    cin >> n;
    int m = n;
    int mask = 0;
    if (n == 0){
        cout << 1 << endl;
    } else{
    while(m > 0){
    mask = (mask << 1) | 1;
    m = m >> 1;
    }
    int ans = (~n) & mask;
    cout << ans;
    }
    return 0;
}