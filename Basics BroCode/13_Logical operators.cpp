#include <iostream>

int main()
{

    // && checks if two conditions are true (this and that)
    // || checks if at least one condition is true (this or that)
    // ! reverses the values of a logical state (not)

    int temp;

    std::cout << "What is the temperature: ";
    std::cin >> temp;

    // temp being greater than or equal to 15 AND(&&) less than or equal to 25
    if (15 <= temp && temp <= 25)
    {
        std::cout << "The weather is nice" << "\n";
    }
    // temp being less than or equal to 0 OR(||) greater than or equal to 35
    else if (temp <= 0 || 35 <= temp)
    {
        std::cout << "The weather is harsh" << "\n";
    }
    else if (0 < temp && temp < 15)
    {
        std::cout << "It's chill" << "\n";
    }
    else if (25 < temp && temp < 35)
    {
        std::cout << "It's hot" << "\n";
    }
    else
    {
        std::cout << "Is your input an number ?" << "\n";
    }

    bool sunny = true;

    // if NOT sunny (inverting the logical value of sunny) !true == false, !false == true
    if (!sunny)
    {
        std::cout << "And it's sunny" << "\n";
    }
    else
    {
        std::cout << "It's not sunny" << "\n";
    }

    return 0;
}