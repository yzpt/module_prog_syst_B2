/*

- Déclarez deux tableaux de taille 5. 
- Utilisez des pointeurs pour copier les éléments du premier tableau dans le deuxième. 
- Affichez les deux tableaux pour vérification.

#
*/


#include <stdio.h>

int main() {
    int arr1[5] = {12, 34, 56, 78, 90};
    int arr2[5];
    int *ptr1 = arr1, *ptr2 = arr2;

    // Copie des éléments de arr1 dans arr2
    for (int i = 0; i < 5; i++) {
        *(ptr2 + i) = *(ptr1 + i);
    }

    // Affichage des deux tableaux
    printf("Tableau 1: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr1 + i));
    }
    printf("\n");

    printf("Tableau 2 (copié): ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr2 + i));
    }
    printf("\n");

    return 0;
}