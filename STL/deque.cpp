//Double ended queue
#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    for(int i : d){
        cout << i << " ";
    }

    // d.pop_back();
    // d.pop_front();
    cout << endl;
    cout << "Element at 1st index : " << d.at(1) << endl;

    cout << "First element : " << d.front() << endl;
    cout << "Last element : " << d.back() << endl;

    cout << "Empty or not : " << d.empty() << endl;

    d.erase(d.begin(), d.begin() + 1);

    for(int i : d){
        cout << i << " ";
    }

    cout << "\nMaximum Size : " << d.max_size() << endl;

    return 0;
}