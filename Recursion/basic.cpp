#include <iostream>
#include <vector>
using namespace std;

int cnt = 0;

void print(){
    if(cnt == 3) return;
    else {
        cout << cnt << endl;
        cnt++;
        print();
    }
}

void printName(int i, int n){
    if(i > n) return;
    else {
        cout << "Mahima" << endl;
        printName(i + 1, n);
    }
}

void print1ToN(int i, int n){
    if(i > n) return;
    else{
        cout << i << " ";
        print1ToN(i+1, n);
    }
}

void printNTo1(int i, int n){
    if(n < i) return;
    else{
        cout << n << " ";
        printNTo1(i, n - 1);
    }
}

//Parameterised
int sumOfNnum(int n, int sum){
    if(n < 1) return sum;
    else{
        sumOfNnum(n - 1, sum + n);
    }
}

//Functional
int sum(int n){
    if(n == 0) return 0;
    else {
        return n + sum(n - 1);
    }
}

int factorial(int n){
    if(n == 1) return 1;
    else{
        return n * factorial(n - 1);
    }
}

void reverseArray(vector<int> arr, int i){
    if(i < 0) return;
    cout << arr[i] << " ";
    reverseArray(arr, i - 1);
}

void reverse(int l, int r, int arr[]){
    if(l >= r) return;
    swap(arr[l], arr[r]);
    reverse(l + 1, r - 1, arr);
}

void reverse2(int i, int n, int arr[]){
    if(i >= n/2) return;
    swap(arr[i], arr[n-i-1]);
    reverse2(i+1, n, arr);
}

bool checkPalindrome(int i, int n, string s){
    if(i >= n/2) return true;
    if(s[i] != s[n-i-1]) return false;
    checkPalindrome(i+1, n, s);
}

int main(){
    // print();
    // int n;
    // cout << "Enter a number : ";
    // cin >> n;
    // printName(1, n);
    // print1ToN(1, n);
    // printNTo1(1, n);
    // cout << sumOfNnum(n, 0) << endl; 
    // cout << sum(n) << endl;

    // cout << factorial(n) << endl;
    // int arr[5] = {1, 2, 3, 4, 5};
    // for(int n : arr){
    //     cout << n << " ";
    // }
    // cout << endl;

    // // reverse(0, 4, arr);
    // reverse2(0, 5, arr);

    // for(int n : arr){
    //     cout << n << " ";
    // }
    // cout << endl;

    string s1 = "madam";

    if(checkPalindrome(0, s1.size(), s1)){
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a Palindrome" << endl;
    }


    return 0;
}