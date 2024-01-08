Écrire un programme C++ qui affiche une pyramide de lettres à partir d'une chaîne std::string fournie par l'utilisateur.

Invitez l'utilisateur à saisir une std::string, puis affichez une pyramide de lettres à partir de cette chaîne, comme suit :

Il est beaucoup plus facile de comprendre la pyramide des lettres à l'aide d'exemples.

Si l'utilisateur entre la chaîne "ABC", votre programme doit afficher :

````
  A
 ABA
ABCBA
````

Si l'utilisateur saisit la chaîne de caractères "12345", votre programme doit s'afficher :

        1
       121
      12321
     1234321
    123454321

Si l'utilisateur saisit 'ABCDEFG', votre programme doit s'afficher :

             A
            ABA
           ABCBA
          ABCDCBA
         ABCDEDCBA
        ABCDEFEDCBA
       ABCDEFGFEDCBA

Si l'utilisateur saisit 'ABCDEFGHIJKLMNOPQRSTUVWXYZ', votre programme doit s'afficher :

                              A
                             ABA
                            ABCBA
                           ABCDCBA
                          ABCDEDCBA
                         ABCDEFEDCBA
                        ABCDEFGFEDCBA
                       ABCDEFGHGFEDCBA
                      ABCDEFGHGFEDCBA
                     ABCDEFGHIJIHGFEDCBA
                    ABCDEFGHIJKJIHGFEDCBA
                   ABCDEFGHIJKLKJIHGFEDCBA
                  ABCDEFGHIJKLMLKJIHGFEDCBA
                 ABCDEFGHIJKLMNMLKJIHGFEDCBA
                ABCDEFGHIJKLMNONMLKJIHGFEDCBA
               ABCDEFGHIJKLMNOPONMLKJIHGFEDCBA
              ABCDEFGHIJKLMNOPQPONMLKJIHGFEDCBA
             ABCDEFGHIJKLMNOPQRQPONMLKJIHGFEDCBA
            ABCDEFGHIJKLMNOPQRSRQPONMLKJIHGFEDCBA
           ABCDEFGHIJKLMNOPQRSTSRQPONMLKJIHGFEDCBA
          ABCDEFGHIJKLMNOPQRSTUTSRQPONMLKJIHGFEDCBA
         ABCDEFGHIJKLMNOPQRSTUVUTSRQMLKJIHGFEDCBA
        ABCDEFGHIJKLMNOPQRSTUVWVUTSRQPONMLKJIHGFEDCBA
       ABCDEFGHIJKLMNOPQRSTUVWXWVUTSRQMLKJIHGFEDCBA
      ABCDEFGHIJKLMNOPQRSTUVWXYXWVUTSRQPONMLKJIHGFEDCBA
     ABCDEFGHIJKLMNOPQRSTUVWXYXWVUTSRQPONMLKJIHGFEDCBA

Si l'utilisateur saisit "C++isFun !", votre programme doit s'afficher :
  
````
        C
       C+C
      C+++C
     C++i++C
    C++isi++C
   C++isFsi++C
  C++isFuFsi++C
 C++isFunuFsi++C
C++isFun!nuFsi++C
````

> [!TIP]
> Réfléchissez au problème avant de commencer et décomposez-le en plusieurs étapes.
Ce problème peut être très difficile à résoudre !
**N'oubliez pas de coller votre solution sous forme de code lorsque vous soumettez votre travail.
**N'oubliez pas non plus de soumettre votre code pour que vos camarades puissent le voir et éventuellement le commenter.
Amusez-vous bien ! :smiley :

>[!INFO]
> Questions pour cet exercice :
Quelle(s) boucle(s) C++ avez-vous utilisée(s) et pourquoi ?
Comment avez-vous géré l'affichage des espaces en tête de chaque rangée de la pyramide ?
Maintenant que vous avez terminé l'exercice, comment pourriez-vous aborder le problème différemment si vous deviez le résoudre à nouveau ?