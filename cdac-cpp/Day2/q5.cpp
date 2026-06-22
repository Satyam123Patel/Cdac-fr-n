#include <iostream>
using namespace std;
int simpleInterest(int, int, int);
int main(){
    int p;
    int r;
    int n;
    cout << "Enter the PRN's: ";
    cin >> p >> r >> n;

    cout << simpleInterest(p,r,n);
    return 0;
}

int simpleInterest(int p, int r, int n){
    return p*r*n;
}