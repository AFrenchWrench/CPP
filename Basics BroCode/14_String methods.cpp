#include <iostream>

int main()
{

    std::string name;

    std::cout << "What's your name: ";
    std::getline(std::cin >> std::ws, name);

    // will return true if a string is empty else false
    if (name.empty())
    {
        std::cout << "You didn't enter your name" << "\n";
    }
    else
    {
        // will give a string's length
        std::cout << ((name.length() > 15) ? "Your name is way too long" : "Your name is alright") << "\n";
    }

    std::string temp_name = name;
    // will empty a string
    temp_name.clear();

    std::cout << "Hello " << temp_name << "\n";

    std::string idiot = "idiot ";
    // will add a string at the end of another
    idiot.append(name);

    std::cout << "Hello " << idiot << "\n";

    // will access given index of a string
    std::cout << name.at(0) << "\n";

    // will insert a char at the given index
    name.insert(2, "|");
    std::cout << name << "\n";

    // will find the given char (if exists within the string)
    std::cout << name.find(" ") << "\n";

    // will erase the given portion of the string (start(inclusive),end(exclusive))
    name.erase(0, 3);
    std::cout << name << "\n";

    return 0;
}