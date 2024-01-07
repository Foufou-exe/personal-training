#include <iostream>
#include <climits>
#include <vector>

using namespace std;





// La fonction à pour but de donner la taille des types de données
// int main()
// {
//     cout << "sizeof information" << endl;
//     cout << "========================" << endl;
//     cout << "char: " << sizeof(char) << " bytes" << endl;
//     cout << "int: " << sizeof(int) << " bytes" << endl;
//     cout << "unsigned int: " << sizeof(unsigned int) << " bytes" << endl;
//     cout << "short: " << sizeof(short) << " bytes" << endl;
//     cout << "long: " << sizeof(long) << " bytes" << endl;
//     cout << "long long: " << sizeof(long long) << " bytes" << endl;
//     cout << "========================" << endl;

// }


// La fonction a pour but de compter de 0 à 100
// int main()
// {
//     int number {0};

//     for (int i = 0; i < 100; i++)
//     {
//         number += 1;
//         std::cout << number << std::endl;
//     }
//     return 0;
// } 

// Le but de est de tester les tableaux et les pointeurs
// int main()
// {
//     int test_scores [5] {100, 95, 99, 87, 88};
//     int high_score_per_test [10] {3, 5}; // 3 premiers éléments sont initialisés à 3 et le reste à 0
//     const int days_in_year {365};
//     double hi_temps [days_in_year] {0}; // Tous les éléments sont initialisés à 0

//     int another_array [] {1, 2, 3, 4, 5}; // Taille du tableau est de 5

//     cout << "First score at index 0: " << test_scores[0] << endl;
//     cout << "Second score at index 1: " << test_scores[1] << endl;
//     cout << "Third score at index 2: " << test_scores[2] << endl;
//     cout << "Fourth score at index 3: " << test_scores[3] << endl;
//     cout << "Fifth score at index 4: " << test_scores[4] << endl;

//     cout << "\nNotice what the value of the array name is: " << test_scores << endl;

//     int *score_ptr {test_scores}; // Pointeur sur le premier élément du tableau
//     cout << "\nValue of score_ptr: " << score_ptr << endl;
//     cout << "\nValue of first element of array: " << *score_ptr << endl;

//     score_ptr = score_ptr + 1;
//     cout << "\nValue of score_ptr: " << score_ptr << endl;
//     cout << "\nValue of first element of array: " << *score_ptr << endl;

//     return 0;
// }

// Le but de est de tester les vectors de manière dynamique
// int main()
// {   
//     // Utilisation du vector pour créer un tableau dynamique
//     vector <int> vec {10, 20, 30, 40, 50};
//     cout << vec.at(0) << endl;
//     return 0;
// }

// Le but est de tester Incrémentation et décrémentation (préfixe et postfixe)
// int main()
// {
//     int count {10};
//     int result {0};

//     count = ++count + 100;
//     cout << count << endl;
//     result = count++ + 100;
//     cout << count << endl;
//     cout << result << endl;

//     return 0;
// }