#include <iostream>
using namespace std;

int getLargest(int);
int main(){
    int num;
    cout << "Enter two number: ";
    cin >> num;
    cout << getLargest(num);
}

int getLargest(int num){
    int max = 0;
    while(num>0){
        if(num%10>max){
            max = num%10;
        }
        num = num/10;
    }
    return max;
}