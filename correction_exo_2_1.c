/*

- Écrivez un programme qui déclare un entier, un pointeur vers cet entier, et utilise ce pointeur pour modifier la valeur de l'entier.
- Affichez la valeur de l'entier avant et après la modification.


#
*/


#include <stdio.h>

int main() {
    int number = 10;
    int *ptr = &number;

    printf("Valeur de number avant modification: %d\n", number);

    // Modification de la valeur via le pointeur
    *ptr = 20;

    printf("Valeur de number après modification: %d\n", number);

    return 0;
}