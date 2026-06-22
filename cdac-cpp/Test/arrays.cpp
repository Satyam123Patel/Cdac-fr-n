#include <iostream>
#include <string>
using namespace std;

int main(){
    int n = 0;
    cout << "Enter the arraylength: ";
    cin >> n;
    int arr[n] = {};
    
    for(int i=0;i<n;i++){
        cout << "Enter number: " << (i+1) << ": ";
        cin >> arr[i];
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}