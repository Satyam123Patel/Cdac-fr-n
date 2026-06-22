#include <iostream>
using namespace std;

void swap(int *num1, int *num2);

int main(){
    int num1, num2;
    cout << "Enter two number side by side: ";
    cin >> num1 >> num2;
    swap(num1, num2);
    cout << "Numbers are " << num1 << " " << num2;

    return 0;
}

void swap(int *num1, int *num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;

}