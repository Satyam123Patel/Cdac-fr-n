#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    int len = num/2;
    for(int i=1;i<=len;i++){
        if((num%i)==0){
            cout << i << " ";
        }

    }
    cout << num;
    return 0;
}