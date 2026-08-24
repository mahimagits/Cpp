#include <iostream>
using namespace std;

int main(){
    int num = 3;
    int *ptr = &num;

    cout << *ptr << endl;
    cout << ptr << endl;
    cout << sizeof(ptr) << endl;

    double n = 4.2;
    double *p = &n;
    cout << sizeof(*p) << endl;
    cout << sizeof(p) << endl;

    int *p2 = 0;      //null pointer
    p2 = &num;
    cout << *p2 << endl;

    (*p2)++;
    cout << num << endl;

    //Copying a pointer
    int *q = p2;
    cout << q << " - " << p2 << endl;

    return 0;
}