#include <iostream>
#include <array>
using namespace std;

int main(){
    array<int, 4> a = {1, 2, 3, 4};

    int size = a.size();

    for(int i : a){
        cout << a[i] << " ";
    }

    cout << "\nElement at index 2 : " << a.at(2) << endl;
    cout << "Empty or not : " << a.empty() << endl;
    
    cout << "First Element : " << a.front() << endl;
    cout << "Last Element : " << a.back() << endl;

    return 0;
}