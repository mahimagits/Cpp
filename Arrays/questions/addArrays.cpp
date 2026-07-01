#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int> &arr){
    int i = 0;
    int j = arr.size() - 1;
    while(i <= j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

vector<int> findArraySum(vector<int> &arr1, vector<int> &arr2){
    int i = arr1.size() - 1;
    int j = arr2.size() - 1;
    vector <int> ans;
    int carry = 0;
    while(i >= 0 && j >= 0){
        int val1 = arr1[i];
        int val2 = arr2[j];
        int sum = val1 + val2 + carry;
        carry = sum/10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }

    while(i >= 0){
        int sum = arr1[i] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }

    while(j >= 0){
        int sum = arr2[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--; 
    }

    if(carry){
        ans.push_back(carry);
    }

    reverse(ans);

    return ans;
}

int main(){
    vector<int> num1 = {4, 5, 1};
    vector<int> num2 = {3, 4, 5};

    vector<int> ans = findArraySum(num1, num2);

    for(auto i : ans){
        cout << i << " ";
    }

    return 0;
}