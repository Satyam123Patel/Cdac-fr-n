#include <iostream>

int main()
{
    int result = 0;
    int n1 = 5;
    int n2 = 2;

    // result = 1 + 5 / 4 - 3;
    // result = (2 + 4) / 4 + 5 / 2;

    // result = n1 % n2;

    // result = n1 << n2; //5<<2 // 0000 0101 << 0000 0010
    // result = n1>>n2;

    // result = n1 | n2; // 0000 0101  00000010
    // result = n1 & n2;
    // result = n1 ^ n2;

    // result = n1 || n2; // 5  || 2 // (5) || (2)
    // result = n1 && n2; // 5 && 0 TRUE && FALSE
    // n1 = 5;
    // result = 5;
    // result = (2 + 2) || (n1++);
    // std::cout << n1;

    // result = n1 > n2 ? n1 : n2;
    result = ++n1 + n1++;
    std::cout << result;
    std::cout << std::endl;
    return 0;
}