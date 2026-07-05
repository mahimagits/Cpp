#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char name[20];

    cout << "Enter your name : " ;
    cin.getline(name, 20);       //Default custom delimeter is '\n' (next line)

    cout << name << endl;

    string s;

    cout << "Enter anything : ";
    getline(cin, s, '.');       // '.' is custom delimeter -> stop reading input

    cout << s << endl;

    //Inbuilt Functions
    int len = strlen(name);

    cout << "Length : " << len << endl;

    return 0;
}