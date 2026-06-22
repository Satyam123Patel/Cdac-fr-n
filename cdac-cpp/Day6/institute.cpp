#include <iostream>
#include <string>
#define FACULTY 3
#define STUDENT 30
using namespace std;


class Person{
    public:
        string name;
        int prn;
        string email;
        void insertData(Person p[]);
        void displayData(Person p[]);
};

class Faculty: public Person{

};

class Student: public Person{

};

void Faculty::insertData(Faculty fa[]){
    Faculty f;
    cout << "Enter the name: ";
    cin >> f.name;
    cout << "Enter the prn: ";
    cin >> f.prn;
    cout << "Enter the email: ";
    cin >> f.email;
    fa.add(f);
}
void Student::insertData(Student sa[]){
    Student s;
    cout << "Enter the name: ";
    cin >> s.name;
    cout << "Enter the prn: ";
    cin >> s.prn;
    cout << "Enter the email: ";
    cin >> s.email;
    fa.add(s);
    
}

void Faculty::displayData(Faculty fa[]){
    for(int i=0;i<fa.length();i++){ 
        cout << fa[i].name << endl;
        cout << fa[i].prn << endl;
        cout << fa[i].email << endl;
    }
}

void Student::displayData(Student sa[]){
    for(int i=0;i<sa.length();i++){ 
        cout << sa[i].name << endl;
        cout << sa[i].prn << endl;
        cout << sa[i].email << endl;
    }
}

int main(){
    Faculty fa[FACULTY];
    Student sa[STUDENT];

    cout << "Hi Welcome to Institue 1-faculty 2-student 3-display 0-exit " << endl;
    while(true){
        Faculty f;
        Student s;
        int n;
        cout << "Enter the choise: ";
        cin >> n;
        if(n==0){
            cout << "Bye!";
        }
        switch(n){
            case 1: f.insertData(fa);
            break;
            case 2: s.insertData(sa);
            break;
            case 3: 
            f.displayData(fa);
            s.displayData(sa);
            default: cout << "Invalid input";
        }
    }

    return 0;
}