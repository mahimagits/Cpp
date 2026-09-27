#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> &arr){
    int n = arr.size();
    int el = arr[0];
    int cnt = 1;
    for(int i = 1; i < n; i++){
        if(arr[i] == el){
            cnt++;
        } else {
            cnt--;
        }
        if(cnt == 0){
            el = arr[i];
            cnt = 1;
        }
    }
    return el;
}

int main(){
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};

    cout << majorityElement(arr);

    return 0;
}