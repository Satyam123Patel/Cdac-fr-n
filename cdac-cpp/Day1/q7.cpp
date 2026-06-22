#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Input number: ";
    cin >> num;
    int ecount = 0;
    int ocount = 0;
    while(num>0){
        int temp = num%10;
        if(temp%2==0){
            ecount++;
        }
        else{
            ocount++;
        }
        num = num/10;
    }
    cout << "Output: Even digits = " << ecount << " Odd digits = " << ocount;

    return 0;
}