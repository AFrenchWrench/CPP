// useful functionalities
#include <iostream>

int main()
{

    // Standard Character Output
    std::cout << "Hi my name is Slim Shady" << std::endl; // Ending the line with endl
                                                          // (Slower becaus it flushes the buffer)
                                                          // Flushing means forcing the output to be written

    std::cout << "I'm the real Shady" << "\n"; // Ending the line with \n
                                               // (Faster because it doesn't flush the buffer (Preferred))

    // if we reach here it means no problem
    return 0;
}