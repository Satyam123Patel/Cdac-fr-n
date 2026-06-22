#include <iostream>
using namespace std;


int checkBalance(int bal);
int deposit(int bal, int arr[], int &index, int size);
int withdraw(int bal, int arr[], int &index, int size);
void miniStatement(int arr[], int size);
void leftShiftArray(int arr[], int size);


int main(){
    cout << "welcome to Bank" << "\n";
    int balance = 0;
    int arr[5] = {0};
    int size = 5;
    int index = 0;
    while(true){
        char ch;
        cout << "Enter the case c,d,w,m,e: ";
        cin >> ch;
        if(ch == 'e'){
            cout << "Bye!" << "\n";
            break;
        }
        
        switch(ch){
            case 'c': cout << "Balance is: " << checkBalance(balance) << "\n";
            break;
            case 'd': balance = deposit(balance, arr, index, size);
            cout << "Balance is: " << balance << "\n";
            break;
            case 'w': balance = withdraw(balance, arr, index, size);
            cout << "Balance is: " << balance << "\n";
            break;
            case 'm': miniStatement(arr, size);
            break;
            default: cout << "Invalid Operation" << "\n";
        }

    }

    return 0;
}

int checkBalance(int bal){
    return bal;
}

int deposit(int bal, int arr[], int &index, int size){
    cout << "Enter the money to Deposite: ";
    int value;
    cin >> value;
    if(index<size){
        arr[index] = value;
        bal = bal+value;
        index++;
    }
    else{
        leftShiftArray(arr, size);
        arr[size-1] = value;
        bal = bal+value;
    }

    return bal;
}

int withdraw(int bal, int arr[], int &index, int size){
    cout << "Enter the money to Withdraw: ";
    int value;
    cin >> value;

    if(value>bal){
        cout << "Not Enough Balance" << "\n";
        return bal;
    }

    if(index<size){
        arr[index] = -value;
        bal = bal-value;
        index++;
    }
    else{
        leftShiftArray(arr,size);
        arr[size-1] = -value;
        bal = bal-value;
    }

    return bal;
}

void leftShiftArray(int arr[], int size){
    for(int i=0;i<size-1;i++){
        arr[i] = arr[i+1];
    }
}

void miniStatement(int arr[], int size){
    for(int i=0;i<size;i++){
        if(arr[i]>0){
            cout << arr[i] << " Deposited " << "\n";
        }
        else if(arr[i]==0){
            continue;
        }
        else{
            cout << arr[i]*(-1) << " WithDrawed " << "\n";
        }
    }
}