#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> brute(vector<int> &arr){
    vector <int> ans;
    for(int i = 0; i < arr.size(); i++){
        if(ans.size() == 0 || ans[0] != arr[i]){
            int cnt = 0;
            for (int j = 0; j < arr.size(); j++){
                if(arr[i] == arr[j]){
                    cnt++;
                }
            }
            if(cnt > arr.size()/3){
                ans.push_back(arr[i]);
            }
        }
        if(ans.size() == 2){
            break;
        }
    }
    return ans;
}

vector<int> better(vector<int> &arr){
    map<int, int> mpp;
    int n = arr.size();
    int mini = (n/3) + 1;
    vector<int> ans;
    for(int i = 0; i < n; i++){
        mpp[arr[i]] += 1;
        if(mpp[arr[i]] == mini){
            ans.push_back(arr[i]);
        }
        if(ans.size() == 2){
            break;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {1, 1, 1, 2, 2, 3, 3, 3};

    vector<int> majEl = better(arr);

    for(auto it : majEl){
        cout << it << " ";
    }

    return 0;
}