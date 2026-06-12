#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

void printArray(char arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    printArray(arr, 5);
    cout << endl;

    int a[5];
    fill(a, a + 5, 10);
    printArray(a, 5);
    cout << endl;

    int num[15] = {1, 2};
    fill(num + 2, num + 15, 6);
    printArray(num, 15);
    cout << endl;

    char ch[5] = {'A', 'B', 'C', 'D', 'E'};
    printArray(ch, 5);
    cout << endl;

    cout << sizeof(num) << endl;

    return 0;
}