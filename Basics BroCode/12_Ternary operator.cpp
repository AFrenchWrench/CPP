#include <iostream>

int main()
{

    // ternary operator ?: = replacing if/else
    // condition ? expression1 : expression2;

    // if the condition is true the 1st expression wil run else the 2nd expression

    int grade = 75;

    if (grade >= 60)
    {
        std::cout << "You pass" << "\n";
    }
    else
    {
        std::cout << "You fail" << "\n";
    }

    grade >= 60 ? std::cout << "You pass" << "\n" : std::cout << "You fail" << "\n";

    int number = 213;

    number % 2 ? std::cout << "ODD" << "\n" : std::cout << "EVEN" << "\n";

    bool hungary = true;

    hungary ? std::cout << "Let's eat" << "\n" : std::cout << "We'll eat later" << "\n";

    // an alt syntax would be
    
    std::cout << (hungary ? "Eat dude" : "U full") << "\n";

    return 0;
}