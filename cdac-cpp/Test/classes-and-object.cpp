#include <iostream>
#include <string>
using namespace std;

class Student{
private:
    string name;
    int rollno;
    float marks;

public:
    void setData(string n, int r, float m){
        name = n;
        rollno = r;
        marks = m;
    }

    void display(){
        cout << "Name: " << name << endl;
        cout << "Roll no: " << rollno << endl;
        cout << "Marks " << marks << endl;
    }

    float getMarks(){
        return marks;
    }

};

int main(){

    Student s1, s2;
    s1.setData("yadneysh", 44, 44.56);
    s2.setData("amita", 45, 33.3);

    cout << "Student Details: " << endl;
    s1.display();

    cout << "Student 2 Details: " << endl;
    s2.display ();

    return 0;
}