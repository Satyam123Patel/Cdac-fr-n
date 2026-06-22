#include<iostream>
using namespace std;

int calculateSum(int n);
int main(){
    int n;
    cout << "Entet the number to get sum: ";
    cin >> n;

    int sum = 0;
    sum = calculateSum(n);

    cout << "Total sum is: " << sum;
}
int calculateSum(int n){
    if(n==0){
        return 0;
    }
    return n+calculateSum(n-1);
}
