#include <iostream>
#include <cstring>
#define NAMESIZE 50
#define ELECOUNT 2
using namespace std;
struct employee{
    int empID;
    char empName[NAMESIZE];
    char empDesig[NAMESIZE];
    char department[NAMESIZE];
    double salary;
} emp[ELECOUNT];
/*
struct employee{
    int empID;
    char empName[NAMESIZE];
    char empDesig[NAMESIZE];
    char department[NAMESIZE];
    double salary;
} uemp;   uemp 100 bytes
*/
struct employee getEmp();
void displayEmp(struct employee);
int departmentwiseCount(struct employee e[], char dept[NAMESIZE]);

int main(){

    struct employee emp[ELECOUNT];  


    for(int i=0;i<ELECOUNT;i++){
        emp[i] = getEmp();
    }

    for(int i=0;i<ELECOUNT;i++){
        displayEmp(emp[i]);
    }
    
    cout << "\n Number of employees in sales department "
    << departmentwiseCount(emp, (char*)"sales");

    return 0;
}

struct employee getEmp(){
    struct employee e;

    cout << "\nEnter the employee id: ";
    cin >> e.empID;

    cout << "\nEnter the employee nam: ";
    cin >> e.empName;

    cout << "\nEnter the employee designation: ";
    cin >> e.empDesig;

    cout << "\nEnter the employee Department: ";
    cin >> e.department;

    cout << "\nEnter the employee Salary: ";
    cin >> e.salary;

    return e;
}

void displayEmp(struct employee e){
    cout << "\nEmployee Information";
    cout << "\n Employee Id: " << e.empID;
    cout << "\n Employee name: " << e.empName;
    cout << "\n Employee Designation: " << e.empDesig;
    cout << "\n Employee Department: " << e.department;
    cout << "\n Employee Salary: " << e.salary;
    
} 

int departmentwiseCount(struct employee e[], char dept[NAMESIZE]){
    int count = 0;
    for(int i=0;i<ELECOUNT;i++){
        if(strcmp(e[i].department, dept) == 0){
            count++;
        }
    }
    return count;
}