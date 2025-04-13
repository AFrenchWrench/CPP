#include <iostream>

int main()
{

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    // if (condition) {
    //
    //      the snippet will run if condition is true
    //
    //}
    // else {
    //
    //      this one will run if the condition is false
    //
    //}

    // else if (condition) {
    //
    //
    //      this will run if the first condition is false and the condition here is true
    //      if not it'll proceed to the else statement
    //
    //}

    // if two conditions overlap
    // for example age > 18 , age > 100
    // the one that is the first to come will run

    // expected outputs
    // age == 18 : Welcome to the club
    // age == -10 : Bro you not born yet
    // age == 150 : Welcome to the club
    // age == 15 : You a kid

    // if we want to get the condition of age >= 100
    // we have to put it above the other if statements

    if (age >= 18)
    {
        std::cout << "Welcome to the club" << "\n";
    }
    else if (age < 0)
    {
        std::cout << "Bro you not born yet" << "\n";
    }
    else if (age >= 100)
    {
        std::cout << "Bro you fossil" << "\n";
    }
    else
    {
        std::cout << "You a kid" << "\n";
    }

    return 0;
}