#include <iostream>
using namespace std;


class Base{
    private:
        void pvt_base_display(){
            cout << "Private Base Display Function" << endl;
        }
    protected:
        void prot_base_display(){
            cout << "Protected Base Display Function" << endl;
        }
    public:
        void pub_base_display(){
            cout << "Public Base Display Function" << endl;
            pvt_base_display();
            prot_base_display();  //--> can call only in classes
        }

};

class Derived : private Base{
    private:
    void pvt_der_display(){
            cout << "Private Base Display Function" << endl;
        }
    protected:
        void prot_der_display(){
            cout << "Protected Base Display Function" << endl;
        }
    public:
        void pub_der_display(){
            cout << "Public Base Display Function" << endl;
        }
};

int main(){
    Base B;
    Derived D;
    B.pub_base_display();
    cout << "-------" << endl;
    //D.pub_base_display();
    D.pub_der_display();
    //D.pub_base_display(); this base derived method cannot be accessed



    cout << endl;
    return 0;
}