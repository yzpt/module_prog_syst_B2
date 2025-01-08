/*

- Écrivez un programme en C qui permet à l'utilisateur d'entrer 5 nombres entiers.
- Affichez ensuite ces nombres avec leurs indices respectifs dans le tableau.

#
*/



#include <stdio.h>

int main() {
    int numbers[5];
    for (int i = 0; i < 5; i++) {
        printf("Entrez le nombre %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("Les nombres saisis sont :\n");
    for (int i = 0; i < 5; i++) {
        printf("Indice %d : %d\n", i, numbers[i]);
    }

    return 0;
}