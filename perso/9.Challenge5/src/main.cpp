// Section 11
// Challenge 
/*
     Rappelez le défi de la section 9 ci-dessous.
    Votre défi pour la section 11 est de modulariser votre solution au défi de la section 9
    en remaniant votre solution de manière à ce qu'elle utilise des fonctions.
    
    C'est à vous de décider comment modulariser le programme.
    Vous pouvez utiliser ma solution qui est incluse dans ce fichier, ou modulariser votre solution.
    
    Voici quelques conseils :
        - Créez des fonctions pour chaque fonction principale
        - Veillez à ce que les fonctions soient de petite taille
        - Rappelez-vous l'analogie patron/travailleur
        - Conservez la déclaration du vecteur dans la fonction principale et passez l'objet vecteur
          à toute fonction qui en a besoin

        NE PAS déplacer l'objet vectoriel en dehors de la fonction principale et en faire une variable globale.
    
        - Vous pouvez commencer par définir une fonction qui affiche le menu
        - Vous pouvez ensuite définir une fonction qui lit la sélection de l'utilisateur et la renvoie en majuscules.
        - Créez des fonctions pour chaque option du menu
        - Créez des fonctions qui affichent la liste des nombres, calculent la moyenne, etc.
        
    Travaillez une fonction à la fois et prenez votre temps.
    Si vous vous sentez frustré, faites une pause - ce n'est pas aussi facile que cela en a l'air la première fois que vous le faites !
    
    Enfin, n'oubliez pas d'utiliser les prototypes de fonction !
    
    Bonne chance - je sais que vous pouvez y arriver !
*/
/*
    Ce défi consiste à utiliser une collection (liste) d'entiers et à permettre à l'utilisateur de sélectionner des options dans un menu pour effectuer des opérations sur la liste.
    de sélectionner des options dans un menu pour effectuer des opérations sur la liste.
    
    Votre programme doit afficher un menu d'options à l'utilisateur comme suit :
    
    P - Imprimer les nombres
    A - Ajouter un nombre
    M - Afficher la moyenne des nombres
    S - Afficher le plus petit nombre
    L - Affiche le plus grand nombre
    Q - Quitter

    Saisissez votre choix :
    
Le programme ne doit accepter que des choix valides de la part de l'utilisateur, les sélections en majuscules et en minuscules étant autorisées.
Si un choix illégal est effectué, le message "Sélection inconnue, veuillez réessayer" doit s'afficher et les options du menu doivent être réaffichées.
s'afficher à nouveau.


Si l'utilisateur saisit "P" ou "p", vous devez afficher tous les éléments (ints) de la liste.
Si la liste est vide, vous devez afficher "[] - la liste est vide"
Si la liste n'est pas vide, tous les éléments de la liste doivent être affichés entre crochets, séparés par un espace.
Par exemple, [ 1 2 3 4 5 ]
      
Si l'utilisateur saisit "A" ou "a", vous devez lui demander un nombre entier à ajouter à la liste
que vous ajouterez à la liste et afficherez ensuite qu'il a été ajouté. Par exemple, si l'utilisateur saisit 5
vous devez afficher "5 ajouté".
Les entrées de liste en double sont acceptables

Si l'utilisateur saisit "M" ou "m", vous devez calculer la moyenne des éléments de la liste et l'afficher.
Si la liste est vide, vous devez afficher "Impossible de calculer la moyenne - pas de données".

Si l'utilisateur saisit "S" ou "s", vous devez afficher le plus petit élément de la liste.
Par exemple, si la liste contient [2 4 5 1], vous devez afficher "Le plus petit nombre est 1"
Si la liste est vide, vous devez afficher "Impossible de déterminer le plus petit nombre - la liste est vide".

Si l'utilisateur saisit "L" ou "l", vous devez afficher le plus grand élément de la liste.
Par exemple, si la liste contient [2 4 5 1], le message suivant doit s'afficher : "Le plus grand nombre est 5".
Si la liste est vide, vous devez afficher "Impossible de déterminer le plus grand nombre - la liste est vide".

Si l'utilisateur saisit "Q" ou "q", vous devez afficher "Au revoir" et le programme doit se terminer.

Avant de commencer. Rédigez les étapes à suivre et décidez de l'ordre dans lequel elles doivent être exécutées.
Réfléchissez aux boucles à utiliser ainsi qu'à la logique de sélection.

Cet exercice peut s'avérer difficile ! Il se peut que vous deviez faire plusieurs tentatives avant de le terminer - ce n'est pas grave !

Enfin, veillez à tester votre programme au fur et à mesure et à la fin.

Conseil : utilisez un vecteur !

Fonctionnalité supplémentaire si vous souhaitez étendre ce programme.

- rechercher un nombre dans la liste et, s'il est trouvé, afficher le nombre de fois qu'il apparaît dans la liste
- effacer la liste (la rendre à nouveau vide) (Astuce : la classe vectorielle possède une méthode .clear())
- ne pas autoriser les entrées en double
- Trouvez vos propres idées !

Bonne chance !

*/
#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> numbers {};
    char selection {};
    
    do {
        // Display menu
        cout << "\nP - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number"<< endl;
        cout << "Q - Quit" << endl;
        cout << "\nEnter your choice: ";
        cin >> selection;

        
        if (selection == 'P' || selection == 'p') {
            if (numbers.size() == 0)
                cout << "[] - the list is empty" << endl;
            else {
                cout << "[ ";
                for (auto num: numbers)
                    cout << num << " ";
                cout << "]" << endl;
            }
        } else if (selection == 'A' || selection == 'a') {
            int num_to_add {};
            cout << "Enter an integer to add to the list: ";
            cin >> num_to_add;
            numbers.push_back(num_to_add);
            cout << num_to_add << " added" << endl;
        } else if (selection == 'M' || selection == 'm') {
            if (numbers.size() == 0)
                cout << "Unable to calculate mean - no data" << endl;
            else {
                int total {};
                for (auto num: numbers)
                    total += num;
                cout << "The mean is : " << static_cast<double>(total)/numbers.size() << endl;
            }
        } else if (selection == 'S' || selection == 's') {
            if (numbers.size() == 0) 
                cout << "Unable to determine the smallest - list is empty" << endl;
            else {
                int smallest = numbers.at(0);
                for (auto num: numbers)
                    if (num < smallest)
                        smallest = num;
                cout << "The smallest number is: " << smallest << endl;
            }
        } else if (selection == 'L' || selection == 'l') {
            if (numbers.size() == 0)
                cout << "Unable to determine largest - list is empty"<< endl;   
            else {
                int largest = numbers.at(0);
                for (auto num: numbers)
                    if (num > largest)
                        largest = num;
                cout << "The largest number is: " << largest << endl;
            }
        } else if (selection == 'Q' || selection == 'q') {
            cout << "Goodbye" << endl;
        } else {
            cout << "Unknown selection, please try again" << endl;
        }
    } while (selection != 'q' && selection != 'Q');

    cout  << endl;
    return 0;
}

