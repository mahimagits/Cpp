#include <iostream>
using namespace std;

void dummy(int n){
    n++;
    cout << n << endl;
}

int main (){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    dummy(n);
    cout << n;

    return 0;
}