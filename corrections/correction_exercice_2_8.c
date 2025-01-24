/*

- Créez un tableau de 8 entiers. 
- Utilisez des pointeurs pour parcourir le tableau et trouver le plus grand et le plus petit élément. 
- Affichez les valeurs.


#
*/


#include <stdio.h>

int main() {
    int arr[8] = {10, 20, 5, 8, 15, 30, 25, 40};
    int *ptr = arr;
    int max = *ptr, min = *ptr;

    // Parcours du tableau pour trouver le max et le min
    for (int i = 1; i < 8; i++) {
        if (*(ptr + i) > max) {
            max = *(ptr + i);
        }
        if (*(ptr + i) < min) {
            min = *(ptr + i);
        }
    }

    printf("Le maximum est: %d\n", max);
    printf("Le minimum est: %d\n", min);

    return 0;
}