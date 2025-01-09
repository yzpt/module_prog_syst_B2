/*

- Écrivez un programme en C qui demande à l'utilisateur de saisir 10 nombres dans un tableau.
- Implémentez une rotation circulaire vers la droite des éléments du tableau. Par exemple, si le tableau contient [1, 2, 3, 4, 5], après une rotation, il devient [5, 1, 2, 3, 4].
- Affichez le tableau avant et après la rotation.

#
*/


#include <stdio.h>

int main() {
    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int temp;

    // Affichage avant rotation
    printf("Tableau avant la rotation: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Rotation circulaire vers la droite
    temp = numbers[9];
    for (int i = 9; i > 0; i--) {
        numbers[i] = numbers[i - 1];
    }
    numbers[0] = temp;

    // Affichage après rotation
    printf("Tableau après la rotation: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}