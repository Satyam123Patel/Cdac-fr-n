#include <iostream>
using namespace std;

void printBetween(int ,int);
int main(){
    int num1;
    int num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    printBetween(num1, num2);
}

void printBetween(int num1, int num2){
    for(int i=num1+1;i<num2;i++){
        cout << i << " ";
    }
}