#include <iostream>
#define Max 5
using namespace std;

int main(){
    int arr[Max];
    cout << "Enter " << Max << " numbers: ";
    
    for(int i=0;i<Max;i++){
        cin >> arr[i];
    }

    for(int i=0;i<Max;i++){
        cout << arr[i] << " ";
    }
}