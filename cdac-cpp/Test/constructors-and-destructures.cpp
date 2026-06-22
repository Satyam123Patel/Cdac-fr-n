#include <iostream>
#include <string>
using namespace std;

class Book{

private: 

    string name;
    int id;
    float price;

public:

    Book(){
        cout << "Default Constructor called " << endl;
        name = "unknown";
        id = 0;
        price = 0.0;
    }

    Book(string n, int i, float p){
        cout << "Parameterized Constructor called " << endl;
        name = n;
        id = i;
        price = p;
    }

    Book(const Book &b){
        cout << "Copy Constructor Called " << endl;
        name = b.name;
        id = b.id;
        price = b.price;
    }

    ~Book(){
        cout << "Destructor Called" << endl;
    }

    void display(){
        cout << "Book name is: " << name << endl;
        cout << "Book Id is: " << id << endl;
        cout << "Book price is " << price << endl; 
    }
};

int main(){

    Book b1;
    b1.display();

    Book b2("sherlock", 3, 45.4);
    b2.display();

    Book b3 = b2;
    b3.display();

    return 0; 

}