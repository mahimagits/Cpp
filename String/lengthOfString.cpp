#include <iostream>
using namespace std;

int length(char str[]){
    int i = 0, count = 0;
    while(str[i] != '\0'){
        count++;
        i++;
    }

    return count;
}

int main(){
    char name[20];

    cout << "Enter your name : " ;
    cin >> name;

    cout << "Length : " << length(name);
    
    return 0;
}