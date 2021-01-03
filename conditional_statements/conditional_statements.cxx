#include <iostream>
#include <limits>
#include <cmath>
#include <cassert>

int main()
{
    int n;
    std::cin >> n;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    assert(n >= 1 && n <= pow(10,9));

    if(1 <= n && n <= 9)
    {
        switch (n)
        {
        case 1:
            std::cout << "one" << std::endl;
            break;
        case 2:
            std::cout << "two" << std::endl;
            break;
        case 3:
            std::cout << "three" << std::endl;
            break;
        case 4:
            std::cout << "four" << std::endl;
            break;
        case 5:
            std::cout << "five" << std::endl;
            break;
        case 6:
            std::cout << "six" << std::endl;
            break;
        case 7:
            std::cout << "seven" << std::endl;
            break;
        case 8:
            std::cout << "eight" << std::endl;
            break;
        case 9:
            std::cout << "nine" << std::endl;
            break;
        default:
            break;
        }
    }else
    {
        std::cout << "Greater than 9" << std::endl;
    }

    return 0;
}