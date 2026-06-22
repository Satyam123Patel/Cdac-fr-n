#include <iostream>

int main()
{
    statement1: 
    int i = 0;
    for (; i < 5; i++)
    {
        if (i == 3)
            goto statement1;
            std::cout << i;
    }
    std::cout << std::endl;
    return 0;
}