#include <iostream>
using namespace std;
int factorial(int num, int fact);
int main(){
    int n;
    cout << "Enter the factorial: ";
    cin >> n;

    int fac = factorial(n, 1);
    cout << "Facorial of Number: " << fac;

    return 0;

}

int factorial(int num, int fact){
    if(num==1  || num==0){
        return fact;
    }
    fact *= num;
    return factorial(num-1, fact);
}