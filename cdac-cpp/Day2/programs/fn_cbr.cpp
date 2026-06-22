#include <iostream>

void add5(int &x)
{
    x = x + 5;
    std::cout << "\n x = " << x;
}

int main()
{
    int a;
    std::cout << "Enter the values for a : ";
    std::cin >> a; // Assuming entered value is 5
    add5(a);
    std::cout << "\n a = " << a;
    std::cout<<std::endl;
    return 0;
}