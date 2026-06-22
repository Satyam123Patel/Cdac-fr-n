#include<iostream>
using namespace std;

int calculatefact(int n);
int main(){
    int n;
    cout << "Enter the number to get factorial: ";
    cin >> n;
    if(n<=0){
        return 0;
    }
    int factorial = 1;
    factorial = calculatefact(n);

    cout << "Factorial is: " << factorial;
}
int calculatefact(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*calculatefact(n-1);
}
