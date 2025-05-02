#include <iostream>

int main()
{

    // math operators : (+ - * /)

    int students = 20;

    std::cout << students << "\n";

    // 3 syntax for addition
    students = students + 5;
    students += 5;
    // increment (add by 1)
    students++;

    std::cout << students << "\n";

    // 3 syntax for subtraction
    students = students - 4;
    students -= 3;
    // decrement (subtract by 1)
    students--;

    std::cout << students << "\n";

    // 2 syntax for multiplication
    students = students * 5;
    students *= 5;

    std::cout << students << "\n";

    // 2 syntax for division
    students = students / 5;
    students /= 3;

    std::cout << students << "\n";

    // % operator : it gives the remainder of any division
    int remainder = students % 2;

    std::cout << students << " " << remainder << "\n";

    // The order is parentheses -> multiplication and division -> addition and subtraction

    return 0;
}