#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    cout << "Capacity : " << v.capacity() << endl;

    v.push_back(1);
    cout << "Capacity : " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity : " << v.capacity() << endl;

    v.push_back(3);
    cout << "Capacity : " << v.capacity() << endl;

    cout << "Size : " << v.size() << endl;

    cout << "\nElement at index 2 : " << v.at(2) << endl;
    cout << "Empty or not : " << v.empty() << endl;
    
    cout << "First Element : " << v.front() << endl;
    cout << "Last Element : " << v.back() << endl;

    cout << "\nBefore Pop : " << endl;
    for(int i : v) {
        cout << v[i] << " ";
    }

    v.pop_back();

    cout << "\nAfter Pop : " << endl;
    for(int i : v) {
        cout << v[i] << " ";
    }

    cout << "\nBefore clear :- " << endl;
    cout << "Size : " << v.size() << endl;

    v.clear();

    cout << "After Clear :- " << endl;
    cout << "Size : " << v.size() << endl;
    cout << "Capacity : " << v.capacity() << endl;

    vector<int> num(5, 1);                 // 5 elements initialized to 1
    cout << "Num Vector :- " << endl;         
    for(int i : num) {
        cout << num[i] << " ";
    }

    vector<int> last(num);
    cout << "\nNum copy last vector :- " <<endl;     //num's copy
    for(int i : last) {
        cout << last[i] << " ";
    }

    return 0;
}