#include <iostream>
#include <cmath>

int main()
{

    double x = 3;
    double y = 4;
    double z;

    // max of the two
    z = std::max(x, y);
    std::cout << z << "\n";

    // min of the two
    z = std::min(x, y);
    std::cout << z << "\n";

    // x to power of y
    z = pow(x, y);
    std::cout << z << "\n";

    // square root of given number
    z = sqrt(36);
    std::cout << z << "\n";

    // absolute value of a number (Distance from zero)
    z = abs(-69);
    std::cout << z << "\n";

    // number rounded up
    z = ceil(6.9);
    std::cout << z << "\n";

    // number rounded down
    z = floor(6.9);
    std::cout << z << "\n";

    // number rounded
    z = round(6.9);
    std::cout << z << "\n";

    // for more functions and more details
    // https://cplusplus.com/reference/cmath/

    return 0;
}