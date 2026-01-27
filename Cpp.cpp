#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number";
    cin >> n;
    int count = 1;
    int sum = 0;
    while (count <= n) {
        sum += count;
        count += 1;
    }
    cout << sum;
    return 0;
}