#include <iostream>
using namespace std;

int main(){
    int n;  //For example - 26
    cout << "Enter a number: ";
    cin >> n;
    int sum = 0;
    int product = 1;
    while(n % 10 != 0){
        int rem = n % 10;
        sum += rem;
        product *= rem;
        n = n/10;
    }
    cout << "Sum: " << sum << endl; //2+6 = 8
    cout << "Product: " << product << endl; //2*6 = 12
    return 0;
}