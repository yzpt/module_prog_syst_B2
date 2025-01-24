/*

- Écrivez un programme en C qui utilise un pointeur pour calculer la somme des éléments d'un tableau de 7 entiers.


#
*/


#include <stdio.h>

int main() {
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int *ptr = arr;
    int sum = 0;

    // Calcul de la somme
    for (int i = 0; i < 7; i++) {
        sum += *(ptr + i);
    }

    printf("La somme des éléments du tableau est: %d\n", sum);

    return 0;
}