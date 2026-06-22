#include <iostream>
using namespace std;

class Complex{


    public:

        int real;
        int img;

        Complex(){
            real = 0;
            img = 0;
        }
        Complex(int real, int img){
            this-> real = real;
            this-> img = img;
        }

        Complex add(Complex c2);
        Complex sub(Complex c2);
        Complex mul(Complex c2);
};

Complex Complex::add(Complex c2){
    Complex result;
    result.real = this->real + c2.real;
    result.img = this->img + c2.img;
    return result;
}


Complex Complex::sub(Complex c2){
    Complex result;
    result.real = this->real - c2.real;
    result.img  = this->img - c2.img;
    return result;
}

Complex Complex::mul(Complex c2){
    Complex result;
    result.real = (this->real * c2.real) - (this->img * c2.img);
    result.img  = (this->real * c2.img) + (this->img * c2.real);
    return result;
}


int main(){
    Complex c1, c2, res;
    cout << "Welcome to complex Calculations: ";
    cout << "\n 1 to add";
    cout << "\n 2 to mul";
    cout << "\n 3 to sub";
    cout << "\n 0 to exit";
    while(true){
        int choise;
        cout << "\n Enter the choise: ";
        cin >> choise;

        if(choise==0){
            cout << "Bye!";
            break;
        }
        cout << "\n Enter the real and imaginary number 1: ";
        cin >> c1.real;
        cin >> c1.img;
        cout << "\n Enter the real and imaginary number 2: ";
        cin >> c2.real;
        cin >> c2.img;
        switch(choise){
            case 1: res = c1.add(c2);
            cout << res.real << " + " << res.img << "i";
            break;
            case 2: res = c1.mul(c2);
            cout << res.real << " + " << res.img << "i";
            break;
            case 3: res = c1.sub(c2);
            cout << res.real << " + " << res.img << "i";
            break;
            default: cout << "Invalid output";
        }

    }

    return 0;
}