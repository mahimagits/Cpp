#include <iostream>
#include <queue>
using namespace std;

int main(){

    //Maximum heap
    priority_queue <int> maxi;

    maxi.push(2);
    maxi.push(0);
    maxi.push(3);
    maxi.push(1);

    int n = maxi.size();

    cout << "Maximum Heap :-" << endl;
    cout << "Size : " << n << endl;

    for(int i = 0; i < n; i++){
        cout << maxi.top() << " ";
        maxi.pop();
    }

    //Minimum Heap
    priority_queue<int, vector<int>, greater<int> > mini;

    mini.push(0);
    mini.push(3);
    mini.push(1);
    mini.push(2);

    int x = mini.size();

    cout << "\nMinimum Heap :-" << endl;
    cout << "Size : " << x << endl;

    for(int i = 0; i < n; i++){
        cout << mini.top() << " ";
        mini.pop();
    }

    return 0;
}