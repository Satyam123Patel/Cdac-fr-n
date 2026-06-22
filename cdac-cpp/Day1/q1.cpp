#include <iostream>

int main(){
    int n1, n2, n3;
    std:: cout << "Enter the three number: ";
    std:: cin >> n1 >> n2 >> n3;

    if(n1>n2){
        if(n1>n3){
            std:: cout << "Bigger number is " << n1;
        }
    }
    else{
        if(n3>n2){
            std:: cout << "Bigger number is " << n3;
        }
        else{
            std:: cout << "Bigger number is " << n2;
        }
    }
}