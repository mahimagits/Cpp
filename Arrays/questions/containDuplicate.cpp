#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool containDuplicate(vector<int> num){
    sort(num.begin(), num.end());

    int n = num.size();

    for(int i = 1; i < n; i++){
        if(num[i] == num[i - 1]){
            return true;
        }
    }

    return false;
}

int main(){
    vector <int> num = {1, 6, 3, 9};

    cout << containDuplicate(num);

    return 0;
}