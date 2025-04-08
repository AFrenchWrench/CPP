#include <iostream>

// example:
// typedef std::string txt_t;
// the new type definition should have a _t at the end as a convention
// so we know it's a type

using txt_t = std::string;

int main()
{
    // typedef : a keyword to make an additional name for a certain datatype
    //           to reduce typos and increase readability
    // it's actually been replaced with using keyword which works better with templates

    std::string name = "Behdad";
    txt_t last_name = "Sayadi";

    std::cout << name << " " << last_name << "\n";

    return 0;
}