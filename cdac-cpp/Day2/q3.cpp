#include <iostream>
using namespace std;


void add(int ,int);
void sub(int ,int);
void mul(int ,int);
void div1(int ,int);

int main(){
    cout << "Welcome to Calcuator in CPP";
    while(true){
        cout << "Want to coontinue enter 1 or 0: ";
        int check;
        cin >> check;
        if(check==1){
            int num1;
            int num2;
            char ch;
            cout << "Enter the expression giving space: ";
            cin >> num1 >> ch >> num2;

            switch(ch){
                case '+': add(num1, num2);
                break;
                case '-': sub(num1, num2);
                break;
                case '*': mul(num1, num2);
                break;
                case '/': div1(num1, num2);
                break;
                default: cout << "Invalid Operation";

            }
        }
        else{
            break;
        }

    }
    return 0;
}

void add(int num1, int num2){
    int temp = num1+num2;
    cout << temp << "\n";
}

void sub(int num1,int num2){
    cout << num1-num2 << "\n";
}
void mul(int num1,int num2){
    cout << num1*num2 << "\n";
}

void div1(int num1,int num2){
    cout << num1/num2 << "\n";
}
