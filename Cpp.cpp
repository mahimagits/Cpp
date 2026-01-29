#include <iostream>
using namespace std;

int main() {
    int count = 1, n;
    cout << "Enter a number: ";
    cin >> n;

    while(count <= n) {
        count = count * count;
        count++;
        cout << count<<"\n";
    }
    
    return 0;
}