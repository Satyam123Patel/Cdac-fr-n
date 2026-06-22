#include <iostream>

using namespace std;

void inputDOB(int &date, int &month, int &year);
int calculateAge(int curyear, int year);
bool checkEligibility(int age);
void printResult(int date, int month, int year, int age);


int main(){
    /*
    inputDOB()
    calculateAge()
    checkEligibility()
    printResult()
    */
    cout << "Voting System" << "\n";
    int curyear = 2025;
    int age = 0;
    int date = 0;
    int month = 0;
    int year = 0;
    while(true){
        char ch;
        cout << "Enter the case i,a,c,p,e: ";
        cin >> ch;
        if(ch == 'e'){
            cout << "Bye!" << "\n";
            break;
        }
        
        switch(ch){
            case 'i': inputDOB(date, month, year);
            break;
            case 'a': age = calculateAge(curyear, year);
            cout << "Age Updated" << "\n";
            break;
            case 'c': checkEligibility(age) ? cout << "Eligible " << "\n": cout << "Not Eligible" << "\n";
            break;
            case 'p': printResult(date, month, year, age);
            break;
            default: cout << "Invalid Operation" << "\n";
        }

    }

    return 0;
}

void inputDOB(int &date, int &month, int &year){
    cout << "Enter your Date of Birth (DD MM YYYY): ";
    cin >> date >> month >> year;
}

int calculateAge(int curyear, int year){
    return curyear-year;
}

bool checkEligibility(int age){
    if(age>18){
        return true;
    }
    return false;
}

void printResult(int date, int month, int year, int age){
    cout << date << "-" << month << "-" << year << "\n";
    cout << "Age is: " << age << "\n";
    cout << (checkEligibility(age) ? "Eligible\n" : "Not Eligible\n");
}

