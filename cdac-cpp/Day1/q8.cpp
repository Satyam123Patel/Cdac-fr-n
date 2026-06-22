#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num;
    cout << "input: ";
    cin >> num;
    for(int i=1;i<=num;i++){
        cout << pow(i,2) << " ";
    }
    return 0;
}