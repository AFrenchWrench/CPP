#include <iostream>

int main()
{

    // Changing the datatype of a certain value
    //  Implicit = Automatically done by the compiler
    //  Explicit = Manually done by us

    // example of an implicit type conversion
    int x = 3.14;
    std::cout << x << "\n";

    // example of an explicit type conversion
    double y = (int)3.14;
    std::cout << y << "\n";

    // some more examples

    char c = 120;
    std::cout << c << "\n";
    std::cout << (char)120 << "\n";

    int correct = 8;
    int questions = 10;

    std::cout << correct / questions * 100 << "%" << "\n";
    std::cout << correct / (double)questions * 100 << "%" << "\n";

    return 0;
}