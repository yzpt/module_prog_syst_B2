/*


- Déclarez un tableau de 5 entiers. 
- Utilisez un pointeur pour accéder aux éléments du tableau et afficher chaque élément. 


#
*/


#include <stdio.h>

int main() {
    int arr[5] = {43, 22, 1, 5, 99};
    int *ptr = arr;

    printf("Les éléments du tableau sont:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i + 1, *(ptr + i));
    }

    return 0;
}
