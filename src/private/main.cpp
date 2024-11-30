#include <iostream>
#include "Print.h"

int main()
{
    int a = 1, b = 2, c = 3, d = 4;
    std::cout << a << "*" << b << "=" << a*b << std::endl;
    std::cout << a*b << "+"  << c  << "=" << a*b+c << std::endl;
    std::cout << a*b+c << "%" << d << "=" << a*b+c%d << std::endl;
    std::cout << a*b+c%d << "/" << a << "=" << a*b+c%d/a << std::endl;
    std::cin.get();   
}