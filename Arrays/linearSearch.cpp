#include <iostream>
using namespace std;

bool search(int arr[], int size, int element){
    for(int i = 0; i < size; i++){
        if(arr[i] == element){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};

    int element;
    cout << "Enter the element to search for: ";
    cin >> element;

    bool found = search(arr, 5, element);

    if(found){
        cout << element << " is present" << endl;
    } else {
        cout << element << " is not present" << endl;
    }

    return 0;
}