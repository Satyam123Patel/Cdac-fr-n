#include <iostream>

int main()
{
    int i = 5;
    int *iptr;

    iptr = &i;

    std::cout << "\ni = " << i;
    std::cout << "\niptr = " << iptr;
    std::cout << "\n&i = " << &i;
    std::cout << "\n&iptr = " << &iptr;
    std::cout << "\n*iptr = " << *iptr;

    // std::cout << "\niptr+1 = " << iptr + 1;
    // std::cout << "\n*iptr+1 = " << *iptr + 1;
    // std::cout << "\n*(iptr+1) = " << *(iptr + 1);

    // std::cout << "\n*iptr++ = " << *iptr++;
    // std::cout << "\n++*iptr = " << ++*iptr;

    std::cout << std::endl;
    return 0;
}