#include <stdio.h>

int main() {
    int a = 10;

    // Déclaration d'un pointeur sur un entier
    // Le type du pointeur est int *
    // Le nom du pointeur est pointeur_a
    // Le pointeur est initialisé avec l'adresse de la variable a
    int * pointeur_a = &a;
    
    // On peut afficher l'adresse de la variable a
    printf("a = %d (adresse: %p)\n", a, &a);
    printf("pointeur_a = %p\n", pointeur_a);

    a = 'string';
    *pointeur_a = 30;

    printf("la valeur stockée à l'adresse %p est %d\n", pointeur_a, *pointeur_a);

    return 0;
}

