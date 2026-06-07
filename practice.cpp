#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int sum = 0, prod = 1;
    while(n > 0){
        int digit = n % 10;
        sum += digit;
        prod *= digit;
        n /= 10;
    }
    int diff = prod - sum;
    cout << "Difference = " << diff << endl;
    return 0;
}