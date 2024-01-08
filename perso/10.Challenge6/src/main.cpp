// Section 12
// Challenge

/* Écrire une fonction C++ nommée apply_all qui attend deux tableaux d'entiers et leurs tailles et qui alloue dynamiquement un nouveau tableau d'entiers dont la taille est le produit des deux tableaux.
  alloue dynamiquement un nouveau tableau d'entiers dont la taille est le produit des deux tailles de tableaux.
  
  La fonction doit parcourir en boucle le second tableau et multiplier chaque élément par chaque élément du tableau 1, puis stocker le produit dans le tableau nouvellement créé.
  dans le tableau nouvellement créé.
  
  La fonction doit renvoyer un pointeur sur le tableau nouvellement alloué.
  
  Vous pouvez également écrire une fonction print qui attend un pointeur sur un tableau d'entiers et sa taille et qui affiche les éléments du tableau.
  éléments du tableau.
    
  Par exemple,
  
  Voici la sortie du code suivant, qui se trouverait dans main :
  
    int array1[] {1,2,3,4,5} ;
    int array2[] {10,20,30} ;
    
    cout << "Tableau 1 : " ;
    print(array1,5) ;
    
    cout << "Tableau 2 : " ;
    print(array2,3) ;
    
    int *results = apply_all(array1, 5, array2, 3) ;
    cout << "Resultat : " ;
    print(results,15) ;
   
   Sortie
   ---------------------
   Tableau 1 : [ 1 2 3 4 5 ]
   Tableau 2 : [ 10 20 30 ]
   Résultat : [ 10 20 30 40 50 20 40 60 80 100 30 60 90 120 150 ]
*/
  
#include <iostream>
#include <vector>
#include <string>
#include <cstring>

using namespace std;

void print(const int *const array, size_t size) {
    cout << "[ ";
    for (size_t i {0}; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "]" << endl;
}

int* apply_all(const int *const array1, size_t array1_size, const int *const array2, size_t array2_size) {
    int *new_array {};
    new_array = new int[array1_size * array2_size];
    
    int position {0};
    for (size_t i {0}; i < array2_size; i++) {
        for (size_t j {0}; j < array1_size; j++) {
            new_array[position] = array1[j] * array2[i];
            position++;
        }
    }
    
    return new_array;
}

int main() {
    const size_t array1_size {5};
    const size_t array2_size {3};
    
    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};
    
    cout << "Array 1: " ;
    print(array1,array1_size);
    
    cout << "Array 2: " ;
    print(array2,array2_size);
    
    int *results = apply_all(array1, array1_size, array2, array2_size);
    constexpr size_t results_size {array1_size * array2_size};

    cout << "Result: " ;
    print(results, results_size);
    
    cout << endl;

    return 0;
}

