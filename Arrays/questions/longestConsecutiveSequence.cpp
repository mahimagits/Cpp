#include <iostream>
#include <vector>
using namespace std;

bool linearSearch(vector<int> &arr, int num){
    int n = arr.size();
    for(int i = 0; i < n; i++){
        if(arr[i] == num){
            return true;
        }
    }
    return false;
}

int brute(vector<int> &arr){
    int n = arr.size();
    int longest = 1;
    for(int i = 0; i < n; i++){
        int x = arr[i];
        int cnt = 1;
        while(linearSearch(arr, x+1) == true){
            x = x + 1;
            cnt = cnt + 1;
        }
        longest = max(longest, cnt);
    }
    return longest;
}

int main(){
    vector <int> arr = {102, 4, 100, 1, 101, 3, 2, 1, 1};
    cout << "Longest consecutive sequence : " << brute(arr) << endl;
}