#include <iostream>
using namespace std;

int main(){
    // int n;  //For example - 26
    // cout << "Enter a number: ";
    // cin >> n;
    // int sum = 0;
    // int product = 1;
    // while(n % 10 != 0){
    //     int rem = n % 10;
    //     sum += rem;
    //     product *= rem;
    //     n = n/10;
    // }
    // cout << "Sum: " << sum << endl; //2+6 = 8
    // cout << "Product: " << product << endl; //2*6 = 12

    // //Reverse integer
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    // int ans = 0;
    // while(n != 0){
    //     int digit = n % 10;
       
    //     ans = (ans * 10) + digit;
    //     n = n/10;
    // }
    // if((ans > INT32_MAX / 10) || (ans < INT32_MIN / 10)){
    //         cout << "Reverse Integer : " << 0 << endl;
    //     } else {
    //         cout << "Reverse Integer : " << ans << endl;
    //     }
    
    // //Compliment Base 10 Integer
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    // int m = n;
    // int mask = 0;

    // //edge - case
    // if (n == 0){
    //     cout << 1 << endl;
    // }else{
    // while (m != 0){
    //     mask = (mask << 1) | 1;
    //     m = (m >> 1);
    // }

    // int ans = (~n) & mask;
    // cout << ans;
    // }

    // //Power of 2
    // int n;
    // cout << "Enter a number : ";
    // cin >> n;
    // bool isPowerOfTwo = false;
    // int ans = 1;
    // for(int i = 0; i <= 30; i++) {
    //     if(n == ans){
    //         isPowerOfTwo = true;
    //         break;
    //     }
    //     ans = ans*2;
    // }
    // if (isPowerOfTwo){
    //     cout << "True" << endl;
    // } else {
    //     cout << "False" << endl;
    // }

    int totalAmount = 1330;

    int note100, note50, note20, note1;
    switch (1)
    {
    case 1:
        note100 = totalAmount/100;
        totalAmount = totalAmount%100;
        cout << "100 rupees note: " << note100 << endl;
    case 2:
        note50 = totalAmount/50;
        totalAmount = totalAmount%50;
        cout << "50 rupees note: " << note50 << endl;
    case 3:
        note20 = totalAmount/20;
        totalAmount = totalAmount%20;
        cout << "20 rupees note: " << note20 << endl;
    case 4:
        note1 = totalAmount/1;
        cout << "1 rupees note: " << note1 << endl;               
    default:
        break;
    }

    return 0;
}