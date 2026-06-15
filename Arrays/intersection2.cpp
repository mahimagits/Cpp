#include <iostream>
using namespace std;

void intersection(int arrA[], int arrB[], int n, int m){
    int i = 0, j = 0;

    while(i < n && j < m){
        if(arrA[i] == arrB[j]){
            cout << arrA[i] << " ";
            i++;
            j++; 
        } else if (arrA[i] < arrB[j]){
            i++;
        }else{
            j++;
        }  
    }
}

//Given that the two arrays are arranged in ascending order
int main(){
    int num1[6] = {1, 2, 4, 6, 7, 9};
    int num2[4] = {2, 5, 7, 9};

    cout << "Intersection: " << endl;

    intersection(num1, num2, 6, 4);

    return 0;
}