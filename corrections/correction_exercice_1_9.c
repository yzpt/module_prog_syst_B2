/*

- Demandez à l'utilisateur de saisir 10 nombres.
- Identifiez s'il existe des nombres répétés dans le tableau et affichez-les.


#
*/


#include <stdio.h>

int main() {
    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 9};
    int found_duplicate = 0;

    printf("Doublons trouvés : ");
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (numbers[i] == numbers[j]) {
                printf("%d ", numbers[i]);
                found_duplicate = 1;
                break;
            }
        }
    }

    if (!found_duplicate) {
        printf("Aucun doublon trouvé.\n");
    } else {
        printf("\n");
    }

    return 0;
}