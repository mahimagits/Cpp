#include <iostream>
using namespace std;

int main(){
    int binNum = 110010;
    int ans = 0, pow = 1;
    while(binNum > 0){
        int rem = binNum % 10;
        binNum /= 10;
        ans += (rem*pow);
        pow *= 2;
    }
    cout << ans;
}