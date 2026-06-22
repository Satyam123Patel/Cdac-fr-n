#include <iostream>
using namespace std;

int main(){
    int row1;
    int row2;
    int col1;
    int col2;
    cout << "Enter the row1 col1 row2 col2: ";
    cin >> row1 >> col1 >> row2 >> col2;
    if(col1!=row2){
        cout << "Multiplication is not Possible";
        return 0;
    }

    int arr1[row1][col1] = {0};
    int arr2[row2][col2] = {0};
    /*
    0 32767 -1 0 
    0 0 0 0           array if     int arr3[row1][col2] = {0};
    */
    int arr3[row1][col2] = {0, 0, 0};
    /*
    0 0 0 0 
    0 0 0 0      i dont know why but it is doing work.
    */
    
    cout << "Enter the matrix 1: ";
    for(int i=0; i<row1; i++){
        for(int j=0;j<col1;j++){
            cin >> arr1[i][j]; 
        }
    }

    cout << "Enter the matrix 2: ";
    for(int i=0; i<row2; i++){
        for(int j=0;j<col2;j++){

            cin >> arr2[i][j]; 
        }
    }
 

    for (int i =0; i<row1; i++) {
        for (int j =0; j<col2; j++) {
            for (int k =0; k<col1; k++) {
                arr3[i][j] = arr3[i][j] + arr1[i][k]*arr2[k][j];
            }
        }
    }

     //cout << arr3[i][j] + arr1[i][k]*arr2[k][j] << " = " << arr3[i][j] << " + " << arr1[i][k]*arr2[k][j] << "\n";
     // For Checking only

    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            cout << arr3[i][j] << " ";
        }
        cout << "\n";
    }


    return 0;
}




