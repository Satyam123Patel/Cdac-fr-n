#include <iostream>
using namespace std;

int main(){
    int num;
    int power;

    cin >> num >> power;
        int num1 = num;
    while(power>1){
        num = num*num1;
        power--;
    }

    cout << "Output: " << num;
    return 0;
}