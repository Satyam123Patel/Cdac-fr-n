#include <iostream>
using namespace std;

void countFreq(int n, int arr[]);

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int arr[10] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};  
    countFreq(n, arr);
    cout << "frequencies:\n";
    for (int i = 0; i < 10; i++) {
        if(arr[i]!=-1){
            cout << i << "\t" << arr[i]+1 << "\n";
        }
    }

    return 0;
}

void countFreq(int n, int arr[]) {
    while (n > 0) {
        int digit = n % 10;   
        arr[digit]++;        
        n = n / 10;        
    }
}