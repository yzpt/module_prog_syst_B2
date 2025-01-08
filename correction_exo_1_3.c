/*
- Dmandez à l'utilisateur d'entrer 10 nombres --> utiliser un tableau prédéfini.
- Demandez ensuite un nombre à rechercher.
- Comptez combien de fois ce nombre apparaît dans le tableau et affichez le résultat.

*/ 


#include <stdio.h>

int main() {

    // On utilise un tableau prédéfini plutôt que de réclamer à l'utilisateur de rentrer 10 nombres
    int tableau[10] = {56, 12, 6, 56, 8, 56, 12, 56, 56, 56};

    // On demande à l'utilisateur de rentrer un nombre
    int nombre;
    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    // On déclare une variable pour compter le nombre d'occurences (un compteur)
    int compteur = 0;

    // On parcourt le tableau
    // A chaque que l'on rencontre le nombre recherché, on incrémente le compteur de 1
    for (int i = 0; i < 10; i++) {
        if (tableau[i] == nombre) {
            compteur++;  // revient à faire: compteur = compteur + 1;
        }
    }

    // On affiche le résultat
    printf("Le nombre %d apparaît %d fois dans le tableau.\n", nombre, compteur);

    return 0;
}


