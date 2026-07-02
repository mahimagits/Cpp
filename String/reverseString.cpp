#include <iostream>
using namespace std;

void reverse(char str[], int n){
    int s = 0;
    int e = n - 1;
    while(s < e){
        swap(str[s++], str[e--]);
    }
}

int length(char str[]){
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        count++;
    }

    return count;
}

int main(){
    char name[20];

    cout << "Enter your name : ";
    cin >> name;

    int l = length(name);

    cout << "Before Reverse : " << endl;
    cout << name << endl;

    reverse(name, l);
    cout << "After Reverse : " << endl;
    cout << name;

    return 0;
}