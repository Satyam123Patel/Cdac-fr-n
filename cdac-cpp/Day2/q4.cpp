#include <iostream>
using namespace std;
int factorial(int, int);
int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int fact = 1;
    int finalfact = factorial(num, fact);
    cout << finalfact;
    return 0;
}

int factorial(int num, int fact){
    if(num==0 || num==1){
        return fact;
    }
    return num*factorial(num-1, fact);

}