#include <iostream>
using namespace std;

int main(){
    int a = 2, b = 5;
    cout << "a & b : " << (a & b) << endl; //0
    cout << "a | b : " << (a | b) << endl; //7
    cout << "~a : " << (~a) << endl; //-3
    cout << "~b : " << (~b) << endl; //-6
    cout << "a^b : " << (a^b) << endl; //7
    
    // Left and Right shift operator
    cout << (17 << 1) << endl; //34
    cout << (17 >> 1) << endl; //8
    return 0;
}