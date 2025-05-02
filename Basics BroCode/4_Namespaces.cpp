#include <iostream>

namespace first
{
    int x = 1;
}

namespace second
{
    int x = 2;
}

int main()
{
    // Namespace : Provides a solution to prevent naming conflicts
    // Namespace allows for to variables to have the same name as long as they are in a different namespaces

    int x = 0;

    // if the namespace is not stated it'll get the local variable
    std::cout << x << "\n";

    // namespace::variable is how you access a variable within a namespace
    std::cout << first::x << " " << second::x << "\n";

    // using namespace name_of_namespace
    // this will make the namespace the default search option when calling a variable

    return 0;
}