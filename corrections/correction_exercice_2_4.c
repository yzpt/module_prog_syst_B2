/*


- Déclarez un tableau de 10 entiers et un pointeur. 
- Demandez à l'utilisateur d'entrer un nombre, puis utilisez le pointeur pour rechercher cet élément dans le tableau. 
- Affichez un message indiquant si l'élément est présent ou non.


#
*/


#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 45, 65, 23, 12, 78, 34, 56, 90};
    int *ptr = arr;
    int search, found = 0;

    printf("Entrez le nombre à rechercher: ");
    scanf("%d", &search);

    // Recherche de l'élément via le pointeur
    for (int i = 0; i < 10; i++) {
        if (*(ptr + i) == search) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("L'élément %d est présent dans le tableau.\n", search);
    } else {
        printf("L'élément %d n'est pas présent dans le tableau.\n", search);
    }

    return 0;
}
