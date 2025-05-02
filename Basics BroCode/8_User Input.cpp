#include <iostream>

int main()
{

    // cout << (Insertion operator)
    // cin >> (Extraction operator)

    std::string name;
    int age;

    std::cout << "What is your name? ";
    std::cin >> name;

    std::cout << "How old are you? ";
    std::cin >> age;

    std::cout << "Hello " << name << "\n";
    std::cout << "You are " << age << " years old!" << "\n";

    // A problem with cin is that when the input string contains space
    // it won't read anything past that

    // for example if we use this snippet:
    // std::string full_name;
    // std::cin >> full_name;
    // and then input our full name (e.g. Behdad Sayadi)
    // it'll just read the first part and anything after space will go to the next cin (if there is any)

    // the solution is to use std::getline()
    std::string full_name;

    std::cout << "What's your full name? ";
    std::getline(std::cin >> std::ws, full_name);
    // the >> std::ws part is very important, specially when we have accepted inputs beforehand
    /// when we submit and input a \n will be left in the input buffer that will be caught by getline
    // but if we use >> std::ws it will eliminate that \n

    std::cout << "Hello " << full_name << "\n";

    return 0;
}