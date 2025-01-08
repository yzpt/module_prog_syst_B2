/*
## 1.5
- Demandez à l'utilisateur de saisir 10 nombres.
- Affichez séparément les nombres pairs et les nombres impairs.

On utilisera le modulo:
- Si le reste de la division par 2 est 0, le nombre est pair.
- Sinon, il est impair.


*/ 


#include <stdio.h>

int main() {

    // On utilise un tableau prédéfini plutôt que de réclamer à l'utilisateur de rentrer 10 nombres
    int tableau[10] = {56, 12, 3, 4, 99, 23, 45, 67, 89, 101};

    // Affichage des nombres pairs
    printf("Nombres pairs: ");
    for (int i = 0; i < 10; i++) {
        if (tableau[i] % 2 == 0) {
            printf("%d ", tableau[i]);
        }
    }
    printf("\n");

    // Affichage des nombres impairs
    printf("Nombres impairs: ");
    for (int i = 0; i < 10; i++) {
        if (tableau[i] % 2 != 0) {
            printf("%d ", tableau[i]);
        }
    }
    printf("\n");


    return 0;
}


