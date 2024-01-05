#include <iostream>

int main()
{
    int favorite_number;

    std::cout << favorite_number << std::endl;

    return 0;
}

// Warning C4700   Utilisation d'une variable non initialisee 'favorite_number'
// Retourne la valeur de la variable 'favorite_number' qui n'a pas ete initialisee
// int main()
// {
//     int favorite_number;
//     std::cout << favorite_number << std::endl;
//     return 0;
// }

// Cela peut provoquer des erreurs d'execution
// Solution : Initialiser la variable 'favorite_number' avec une valeur par defaut
// int main()
// {
//     int favorite_number = 100;
//     std::cout << favorite_number << std::endl;
//     return 0;
// }