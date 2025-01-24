/*

- Déclarez deux tableaux de 5 entiers chacun. 
- Utilisez des pointeurs pour vérifier si les deux tableaux sont identiques (c'est-à-dire que leurs éléments correspondants sont égaux). 
- Affichez un message indiquant si les tableaux sont identiqu es ou non.


#
*/


#include <stdio.h>

int main() {
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {1, 2, 3, 4, 6};
    int *ptr1 = arr1, *ptr2 = arr2;
    int are_equal = 1;

    // Comparaison des deux tableaux
    for (int i = 0; i < 5; i++) {
        if (*(ptr1 + i) != *(ptr2 + i)) {
            are_equal = 0;
            break;
        }
    }

    if (are_equal) {
        printf("Les tableaux sont identiques.\n");
    } else {
        printf("Les tableaux ne sont pas identiques.\n");
    }

    return 0;
}