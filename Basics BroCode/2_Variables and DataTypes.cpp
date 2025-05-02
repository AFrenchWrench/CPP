#include <iostream>

int main()
{
    // In C++ you don't need to assign a value to a variable at the declaration
    // A variable can be declared and then assigned a value
    // DataType unique_name; This is declaration
    int x;
    // unique_name = value(Based on the DataType); Assignment
    x = 5;

    std::cout << x << "\n";

    // int (Whole number)
    // double (Number with decimal portion)
    // char (A single character)
    // bool (true or false)
    // string (A sequence of chars)
    // std::string unique_name = "Something";

    // Outputing some text alongside a variable
    std::string name = "Behdad";
    int age = 20;

    std::cout << "Hi " << name << "\n";
    std::cout << "You are " << age << " years old" << "\n";

    return 0;
}