// Creator:  Foufou-exe

#include <iostream>

using namespace std;

// Base du code
int main()
{
	std::cout << "Hello World!" << std::endl;
	return 0;
}

/*
* Type d'erreur : C1083
* Description : Impossible d'ouvrir le fichier include : 'iostream' : No such file or directory
* Solution : Ajouter le chemin vers le dossier contenant les fichiers d'en-t�te de la biblioth�que standard C++ dans les propri�t�s du projet
* Propri�t�s du projet > C/C++ > G�n�ral > R�pertoires d'inclusion suppl�mentaires
* $(VC_IncludePath);$(WindowsSDK_IncludePath);$(IncludePath)


* Type d'erreur : C3861
* Description : 'cout' : identificateur introuvable
* Solution : Ajouter la directive 'using namespace std;' ou utiliser le nom complet de la fonction 'std::cout'
* using namespace std;
* std::cout << "Hello World!" << std::endl;

* Type d'erreur : C2065
* Description : 'cout' : identificateur non d�clar�
* Solution : Ajouter la directive 'using namespace std;' ou utiliser le nom complet de la fonction 'std::cout'
* using namespace std;
* std::cout << "Hello World!" << std::endl;

* Type d'erreur : C2065
* Description : 'endl' : identificateur non d�clar�
* Solution : Ajouter la directive 'using namespace std;' ou utiliser le nom complet de la fonction 'std::endl'
* using namespace std;
* std::cout << "Hello World!" << std::endl;

* Type d'erreur : C4430
* Description : D�claration manquante pour le type de donn�es 'int'
* Solution : Ajouter le type de retour de la fonction 'main'
* int main()
* {
* std::cout << "Hello World!" << std::endl;
* return 0;
* }

* Type d'erreur : C2143
* Description : Erreur de syntaxe : absence de ';' avant 'return'
* Solution : Ajouter un point-virgule   la fin de l'instruction 'std::cout << "Hello World!" << std::endl;'
* std::cout << "Hello World!" << std::endl;
* return 0;

* Type d'erreur : C4430
* Description : Declaration manquante pour le type de donnees 'int'
* Solution : Ajouter le type de retour de la fonction 'main'
* int main()
* {
*  std::cout << "Hello World!" << std::endl;
*  return 0;
* }
* Type d'erreur : C2296
* Description : '<<' : operande gauche non associee
* Solution : Ajouter des parentheses autour de l'operation
* std::cout << ("Hello World!" / 125) << std::endl;
*/




