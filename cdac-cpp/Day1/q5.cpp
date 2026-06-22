#include <iostream>
#include <cmath>
using namespace std;
bool armstrong(int num);
int main(){
    int n;
    cout << "Enter the Number: ";
    cin >> n;
    bool arms = armstrong(n);
    if(arms){
        cout << "It is a armstrong number";
    }
    else{
        cout << "It is not an armstrong number";
    }

    return 0;
}

bool armstrong(int num){
    int count = 0;
    int dnum = num;
    while(dnum>0){
        dnum /= 10;
        count++;
    }
    int cnum = num;
    int sum = 0;
    while(cnum>0){
        sum = sum+ pow((cnum%10), count);
        cnum /= 10;
    }
    if(num==sum){
        return true;
    }
    return false;
}