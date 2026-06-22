#include <iostream>
#include <string>
using namespace std;

class Complex{
private:
    float real;
    float imag;
public:
    Complex(){
        real = 0;
        imag = 0;
    }

    Complex(float r, float i){
        real = r;
        imag = i;
    }

    //Overload
    Complex operator + (const Complex &c){
        Complex temp;
        temp.real = temp.real + c.real;
        temp.imag = temp.imag + c.imag;
        return temp;
    }

    Complex operator - (const Complex &c){
        Complex temp;
        temp.real = temp.real - c.real;
        temp.imag = temp.imag - c.imag;
        return temp;
    }

    bool operator == (const Complex &c){
        return ((real==c.real) && (imag = c.imag));
    }

    //overload
    friend ostream& operator << (ostream &out, const Complex &c);

    friend istream& operator >> (istream &in, Complex &c);
};

ostream& operator << (ostream &out, const Complex &c){
    out << "Real: " << c.real << "Imaginary: " << c.imag;
    return out; 
}

istream& operator >> (istream &in, Complex &c){
    cout << "Real Part is: ";
    in >> c.real;
    cout << "Imaginary part is: ";
    in >> c.imag;
    return in;
}


int main(){
    Complex c1(10,34.3);
    Complex c2(23,89.2);

    cout << "c1: " << c1 << endl;
    cout << "c2: " << c2 << endl;

    Complex c3 = c1+c2;
    Complex c4 = c1-c2;

    if(c3==c4){
        cout << "They are same";
    }
    else{
        cout << "They are not same;";
    }
    return 0;
}