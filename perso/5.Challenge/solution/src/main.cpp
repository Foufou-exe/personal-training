#include <iostream>

int main()
{
    int favorite_number;

    std::cout << "Enter yout favorite number between 1 and 100: ";
    
    std::cin >> favorite_number;
    
    // Verifier que l'utilisateur a entre un entier entre 1 et 100
    if (favorite_number <= 0 || favorite_number > 100)
    {
        std::cout << "Number is not between 1 and 100" << std::endl;
        return 1;
    }else
    {
        std::cout << "Amazing!! That's my favorite number too!" << std::endl;
        std::cout << "No really!! " << favorite_number << " is my favorite number!" << std::endl;
    }

    return 0;
}