#include <iostream>
using namespace std;

long long int binarySearch(int num) {
    int start = 0;
    int end = num;
    long long int mid = start + (end - start)/2;
    int ans = 0;
    while(start <= end){
        long long int square = mid * mid;
        if (square == num){
            ans = mid;
            return ans;
        } else if (square > num){
            end = mid - 1;
        } else {
            ans = mid;
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int squareRootInt(int n){
    return binarySearch(n);
}

double morePrecision(int n, int precision, int tempSol){
    double ans = tempSol;
    double factor = 1;

    for(int i = 0; i < precision; i++){
        factor = factor/10;
        for(double j = ans; (j*j) < n; j = j + factor){
            ans = j;
        }
    }
    return ans;
}

int main(){
    int n = 37;
    int tempSol = squareRootInt(n);

    cout << morePrecision(n, 3, tempSol);

    return 0;
}