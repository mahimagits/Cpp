#include <iostream>
using namespace std;

void intersection(int arrA[], int sizeA, int arrB[], int sizeB){
    for(int i = 0; i < sizeA; i++){
        for(int j = 0; j < sizeB; j++){
            if(arrA[i] == arrB[j]){
                cout << arrA[i] << " ";
            }
        }
    }
}

int main(){
    int numA[5] = {7, 9, 3, 1, 5};
    int numB[6] = {5, 8, 2, 7, 8};

    intersection(numA, 5, numB, 6);

    return 0;
}