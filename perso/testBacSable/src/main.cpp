#include <iostream>
#include <typeinfo>

/**
 * @brief The main function of the program.
 * 
 * @return int The exit status of the program.
 */


int main()
{
    int favorite_number;

    std::cout << "Enter yout favorite number between 1 and 100: ";

    std::cin >> favorite_number;
    if (!int(favorite_number))
    {
        std::cout << "You entered a non-integer value" << std::endl;
        return 1;
    }

    try
    {
        if (favorite_number <= 0 || favorite_number > 100)
        {
            throw std::runtime_error("Number is not between 1 and 100");
        }
        std::cout << "Amazing!! That's my favorite number too!" << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}