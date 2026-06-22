#include <iostream>
using namespace std;

//access specifiers private, public, protected
 
class Cls{
    private:
        int i;
        float f;
    public:
        void getVal(){
            cin >> this->i;  //just like use in java
            cin >> this->f;  //-->>  Inside the class considered as inline function;
        }

        void init(int i, float f){
            this->i = i;
            this->f = f;
        }
        /*
        void init(int iv, float fv){   --> we do not need this here.
            i = iv;
            f = fv;
        }*/

        void displayVal();
} objGlobal1;  //Global variable 1

Cls obGlobal2; //Global variable 2


void Cls:: displayVal(){
    cout << i << f;
}
int main(){
    Cls obj1;  //local object
    cout << endl;
    obj1.getVal();
    obj1.displayVal();
    return 0;
}