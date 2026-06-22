#include <iostream>
using namespace std;

int main(){
    int num1;
    int num2;
    int len;
    int gcd;
    cin >> num1 >> num2;
    if(num1>num2){
        len = num2/2;
    }
    else{
        len = num1/2;
    }

    for(int i=1;i<=len;i++){
        if((num1%i)==0 && (num2%i)==0){
            gcd = i;
        }

    }
    cout << gcd << " ";
    return 0;
}