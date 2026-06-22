#include <iostream>
using namespace std;


int calculateBill(int);
int main(){
    int n;
    cout << "Enter the number of slabs: ";
    cin >> n;
    cout << calculateBill(n) << "\n";
    //cout << "Enter absolute value: ";
    int abs1 =100;
    //cin >> abs1;
    cout << "Total Bill: " << abs1+calculateBill(n) << "\n";
}

int calculateBill(int n){
    int sum = 0;
    if(n>0){
        if(n<=100){
            return n*3;
        }
        sum = sum+100*3;
        n -= 100;
    }

    if(n>0){
        if(n<=100){
            return sum+n*4.5;
        }
        sum = sum+100*4.5;
        n -= 100;
    }

    if(n>0){
        sum = sum+n*6;
    }
    return sum;
}

