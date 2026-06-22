#include <iostream>
using namespace std;

int main(){
    int row;
    int col;
    cout << "Enter the row & col: ";
    cin >> row >> col;

    int arr[row][col] = {0};

    cout << "Enter the values in Matrix: ";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin >> arr[i][j];
        }
    }

    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cout << arr[j][i] << " ";
        }
        cout << "\n";
    }


}