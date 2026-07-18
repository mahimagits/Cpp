// index = (c * i + j)    where c-> total no. of columns, i -> row no., j -> column no.

#include <iostream>
using namespace std;

int main(){
    //Creation of 2D Array
    int arr[3][3];

    //Taking input row wise
    // for(int row = 0; row < 3; row++){
    //     for(int col = 0; col < 3; col++){
    //         cin >> arr[row][col];
    //     }
    // }

    //Taking input column wise
    for(int col = 0; col < 3; col++){
        for(int row = 0; row < 3; row++){
            cin >> arr[row][col];
        }
    }

    //Printing Output
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    int arr2[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};    //Row wise
        for(int row = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){
            cout << arr2[row][col] << " ";
        }
        cout << endl;
    }

    int arr3[3][3] = {{1, 11, 111}, {2, 22, 222}, {3, 33, 333}};
        for(int row = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){
            cout << arr3[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}