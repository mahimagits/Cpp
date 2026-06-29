#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6};

    cout << "2 prsent or not : " << binary_search(v.begin(), v.end(), 2) << endl;

    int a = 3, b = 5;

    cout << max(a, b) << endl;

    cout << min(a, b) << endl;

    swap(a, b);
    cout << a << " " << b << endl;

    string s = "abcd";
    reverse(s.begin(), s.end());

    cout << s << endl;

    rotate(v.begin(), v.begin() + 2, v.end());



    for(auto i : v){
        cout << i << " ";
    } cout << endl;

    sort(v.begin(), v.end());  //Quick Sort, Heap Sort, Insertion Sort

    for(auto i : v){
        cout << i << " ";
    } cout << endl;

    return 0;
}