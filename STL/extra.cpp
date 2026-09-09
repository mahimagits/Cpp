#include <iostream>
#include <algorithm>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    //they both are same;
    if(p1.first > p2.first) return true;

    return false;
}

int main(){
    pair<int, int> a[] ={{1, 2}, {2, 1}, {4, 1}};

    //sort it according to first element
    //if second element is same sort it according to first element but in descending order
    sort(a, a+3, comp);

    for(int i = 0; i < 3; i++){
        cout << a[i].first << " " << a[i].second << endl;
    }

    int num = 7;
    int cnt = __builtin_popcount(num);

    cout << cnt << endl;

    return 0;
}