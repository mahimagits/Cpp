#include <iostream>
using namespace std;

int whileLoop(int d) {
    int sum = 0;
    int n = 50;
    while(n--){
        sum += d;
        d += 10;
    }
    return sum;
}

int main(){
    cout << whileLoop(2) << endl;

    return 0;
}