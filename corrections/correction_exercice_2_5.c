/*


- Créez un programme qui trie un tableau de 6 entiers en ordre croissant. 
- Utilisez uniquement des pointeurs pour accéder et manipuler les éléments du tableau.


#
*/


#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int arr[6] = {5, 3, 8, 1, 2, 7};
    int *ptr1, *ptr2;

    // Tri à bulle avec pointeurs
    for (ptr1 = arr; ptr1 < arr + 6 - 1; ptr1++) {
        for (ptr2 = ptr1 + 1; ptr2 < arr + 6; ptr2++) {
            if (*ptr1 > *ptr2) {
                swap(ptr1, ptr2);
            }
        }
    }

    // Affichage du tableau trié
    printf("Tableau trié: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    return 0;
}