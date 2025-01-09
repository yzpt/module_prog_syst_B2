/*

- Déclarez deux tableaux de 5 entiers et initialisez-les avec des valeurs au choix.
- Créez un troisième tableau pour stocker les résultats de l'addition des éléments correspondants des deux premiers tableaux.
- Utilisez des pointeurs pour parcourir les deux tableaux d'origine et additionner leurs éléments correspondants.
- Affichez les deux tableaux d'origine et le tableau résultant de l'addition.


#
*/


#include <stdio.h>

int main() {
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {6, 7, 8, 9, 10};
    int result[5];
    int *ptr1 = arr1;
    int *ptr2 = arr2;
    int *ptr_result = result;

    // Addition des éléments correspondants des deux tableaux
    for (int i = 0; i < 5; i++) {
        *(ptr_result + i) = *(ptr1 + i) + *(ptr2 + i);
    }

    // Affichage des tableaux
    printf("Tableau 1: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr1 + i));
    }
    printf("\n");

    printf("Tableau 2: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr2 + i));
    }
    printf("\n");

    printf("Tableau résultat: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr_result + i));
    }
    printf("\n");

    return 0;
}