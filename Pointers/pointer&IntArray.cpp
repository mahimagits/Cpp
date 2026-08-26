#include <iostream>
using namespace std;

int main(){
    int arr[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 110};

    cout <<"Address of first memory block is -> "<< arr << endl;
    
    //using & operator
    cout << "Address of first memory block using & operator is -> " << &arr[0] << endl;

    cout << *arr << endl;  //11
    cout << (*arr) + 1 << endl;  //12
    cout << *(arr+1) << endl;  //22
    cout << *arr + 1 << endl;  //12

    // arr[i] = *(arr + i)
    cout << *(arr + 3) << endl;

    int i = 5;
    cout << i[arr] << endl; //66

    int temp[4] = {1, 2, 3, 4};
    int *ptr = &temp[0];

    cout << sizeof(ptr) << endl;
    cout << sizeof(&ptr) << endl;
    cout << sizeof(temp) << endl;
    cout << sizeof(&temp) << endl;

    cout << &temp[0] << endl;
    cout << &ptr << endl;

    // temp = temp + 1  Error
    cout << *ptr << endl;
    ptr = ptr + 1;
    cout << *ptr << endl;

    return 0;
}