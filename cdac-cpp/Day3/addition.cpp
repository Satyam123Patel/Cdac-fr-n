#include <iostream>
#define row 3
#define col 3

using namespace std;

int main(){
    int arr1[row][col] = {0};
    int arr2[row][col] = {0};

    cout << "Enter the matrix 1: ";
    for(int i=0; i<row; i++){
        for(int j=0;j<col;j++){
            cin >> arr1[i][j]; 
        }
    }

    cout << "Enter the matrix 2: ";
    for(int i=0; i<row; i++){
        for(int j=0;j<col;j++){
            cin >> arr2[i][j]; 
        }
    }

    int arr3[row][col] = {0};

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            arr3[i][j] = arr1[i][j] + arr2[i][j]; 
        }
    }


    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout << arr3[i][j] << " ";
        }
        cout << "\n";
    }


    return 0;
}



