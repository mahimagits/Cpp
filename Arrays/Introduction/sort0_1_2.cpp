#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

void sort0_1_2(int arr[], int n){
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            cout << arr[i] << " ";
        }
    }
    for(int i = 0; i < n; i++){
        if(arr[i] == 1){
            cout << arr[i] << " ";
        }
    }
    for(int i = 0; i < n; i++){
        if(arr[i] == 2){
            cout << arr[i] << " ";
        }
    }
}

void sort(int arr[], int n){
    int zero = 0, one = 0, two = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            zero++;
        }else if(arr[i] == 1){
            one++;
        }else{
            two++;
        }
    }
    int i = 0;
    while(zero){
        arr[i] = 0;
        zero--;
        i++;
    } while (one) {
        arr[i] = 1;
        one--;
        i++;
    } while(two){
        arr[i] = 2;
        two--;
        i++;
    }
}

int main(){
    int num[8] = {0, 2, 0, 1, 2, 1, 0, 2};

    printArray(num, 8);

    cout << endl;
    sort(num, 8);

    printArray(num, 8);

    return 0;
}