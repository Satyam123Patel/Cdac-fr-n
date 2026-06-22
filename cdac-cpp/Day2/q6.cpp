#include <iostream>
using namespace std;

char calculateGrade(int marks) {
    if(marks >= 90) {
        return 'A';
    }
    else if(marks >= 80){
        return 'B';
    }
    else if(marks >= 70){
        return 'C';
    }
    else if(marks >= 60){
        return 'D';
    }
    else{
        return 'F';
    } 
}

int main() {
    int marks;
    cout << "Enter marks of the student: ";
    cin >> marks;
    char grade = calculateGrade(marks);

    cout << "Grade is: " << grade;

    return 0;
}