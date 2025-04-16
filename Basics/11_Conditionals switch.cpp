#include <iostream>

int main()
{

    // switch : an alt for using a lot of else ifs
    //          for comparing many values against one

    int month;

    std::cout << "Enter a month number: ";
    std::cin >> month;

    switch (month)
    {
    // each case snippet will run if it matches the case
    case 1:
        std::cout << "It's Farvardin";
        break;
    case 2:
        std::cout << "It's Ordibehesht";
        break;
    case 3:
        std::cout << "It's Khordad";
        break;
    case 4:
        std::cout << "It's Tir";
        break;
    case 5:
        std::cout << "It's Mordad";
        break;
    case 6:
        std::cout << "It's Shahrivar";
        break;
    case 7:
        std::cout << "It's Mehr";
        break;
    case 8:
        std::cout << "It's Aban";
        break;
    case 9:
        std::cout << "It's Azar";
        break;
    case 10:
        std::cout << "It's Dey";
        break;
    case 11:
        std::cout << "It's Bahman";
        break;
    case 12:
        std::cout << "It's Esfand";
        break;
    
    // this will run if it won't match any cases
    default:
        std::cout << "Invalid input! enter a number between 1-12";
        break;
    }

    return 0;
}