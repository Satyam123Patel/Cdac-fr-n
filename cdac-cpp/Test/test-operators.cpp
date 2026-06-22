#include <iostream>
#include <string>
using namespace std;

class Box{
private:
    float length;
    float breadth;
    float height;
public:
    bool operator > (Box &b){
        return (length*breadth*height>b.length*b.breadth*b.height);
    }

    friend istream& operator >> (istream &in, Box &b);

};

istream& operator >> (istream &in, Box &b){
    cout << "Enter Length of Box: ";
    in >> b.length;
    cout << "Enter breadth of Box: ";
    in >> b.breadth;
    cout << "Enter height of Box: ";
    in >> b.height;
    return in;
}

int main(){
    Box b1, b2;
    cout << "Enter B1 details:" << endl;
    cin >> b1;
    cout << "Enter B2 details:" << endl;
    cin >> b2;
    
    if(b1>b2){
        cout << "B1 is bigger" << endl;
    }
    else{
        cout << "B2 is bigger" << endl;
    }
    return 0;
}