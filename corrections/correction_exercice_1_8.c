/*

- Demandez à l'utilisateur de saisir 10 nombres.
- Inversez les éléments du tableau et affichez les deux tableaux.


#
*/


#include <stdio.h>

int main() {
    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int temp;

    printf("Tableau original: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Inverser les éléments du tableau
    for (int i = 0; i < 5; i++) {
        int temp = numbers[i];
        numbers[i] = numbers[9 - i];
        numbers[9 - i] = temp;
    }

    printf("Tableau inversé: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}