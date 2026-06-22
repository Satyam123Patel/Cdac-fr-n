#include <iostream>
#include <string>
using namespace std;

class Person{

protected:
    string name;
    int age;

public: 
    Person(string n, int a){
        name = n;
        age = a;
    }

    void displayPerson(){
        cout << "Name is: " << name << endl;
        cout << "Age is: " << age << endl;
    }
};


class Student: public Person{
protected:
    string subject;
    int marks;

public:

    Student(string n, int a, string s, int m): Person(n, a){
        subject = s;
        marks = m;
    }

    void displayStudent(){
        displayPerson();
        cout << "Subject is: " << subject << endl;
        cout << "Marks is: " << marks << endl;
    }

};

class Toodler: public Student{
protected:
    int teeths;
    string tone;

public:
    Toodler(string n, int a, string s, int m, int t, string to): Student(n, a, s, m){
        teeths = t;
        tone = to;
    }

    void displayToddler(){
        displayStudent();
        cout << "Numebr of teeths: " << teeths << endl;
        cout << "Tone is: " << tone << endl;
    }
};

int main(){

    Toodler t1("yadnyesh", 12, "Maths", 60, 23, "good");
    t1.displayToddler();



    return 0;
}