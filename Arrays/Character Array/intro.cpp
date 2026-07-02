#include <iostream>
using namespace std;

int main(){
    char name[20];

    cout << "Enter your name : ";
    cin >> name;

    name[4] = '\0';

    cout << "Name : " << name << endl;

    return 0;
}