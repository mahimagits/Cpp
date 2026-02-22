#include <iostream>
using namespace std;

//function definition
int printHello(){
    cout << "Hello World\n";
    return 3;
}

//Calculate sum of two numbers
int calcSum(int a, int b){
    return a+b;
}

// calculate minimum of two numbers
int min(int a, int b){
    if(a > b){
        return b;
    }else {
        return a;
    }
}


int main(){
    int minimum = min(100, 117);
    cout << "Minimum Number = " << minimum << endl;
    return 0;
}