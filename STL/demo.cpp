#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(){
    // vector<int> v;
    // v.push_back(1);
    // v.emplace_back(2);

    // for(int num : v){
    //     cout << num << " ";
    // }
    // cout << endl;
    // vector<int> nums(5, 26);

    // for(int num : nums){
    //     cout << num << " ";
    // }

    // cout << endl;

    // vector<int>::iterator it = v.begin();
    // it++;
    // cout << *(it) << endl;

    set<int> s;
    s.insert(2);
    s.insert(1);
    s.insert(3);
    s.insert(4);

    auto it = s.find(6);
    cout << *it << endl;
    return 0;
}


