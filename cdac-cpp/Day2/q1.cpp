#include <iostream>
using namespace std;

int main(){
    int i = 4;
    int j = 16;
    int k = 35;
    int l;
    int *ipr;
    ipr = &i;
    cout << "i = " << i << endl;
    cout << "ipr = " << ipr << endl;
    cout << "&i = " << &i << endl;
    cout << "&ipr = " << &ipr << endl;
    cout << "*ipr = " << *ipr << endl; 

    cout << "\nipr + 1 = " << ipr+1 ;
    cout << "\n*(ipr + 1) = " << *(ipr + 1); 
    cout << "\n*ipr + 1 = " << *ipr+2; 

    cout << "\n*ipr++ = " << *ipr++;
    cout << "\n*++iprr = "  << *++ipr;
}
