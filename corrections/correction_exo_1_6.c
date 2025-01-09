/*
## 1.6
- Demandez à l'utilisateur de saisir 10 nombres.
- Permettez à l'utilisateur de rechercher un nombre spécifique dans le tableau.
- Indiquez si le nombre est présent et, si oui, son indice.


*/ 


#include <stdio.h>

int main() {

    // On utilise un tableau prédéfini plutôt que de réclamer à l'utilisateur de rentrer 10 nombres
    int tableau[10] = {56, 12, 3, 4, 99, 23, 45, 67, 89, 101};

    // Demande à l'utilisateur de rentrer un nombre
    int nombre;
    printf("Entrez un nombre: ");
    scanf("%d", &nombre);

    // Recherche du nombre dans le tableau
    int indice = -1; // On initialise l'indice à -1 pour indiquer que le nombre n'a pas été trouvé
    for (int i = 0; i < 10; i++) {
        if (tableau[i] == nombre) {
            indice = i;
            break;
        }
    }

    // Affichage du résultat
    if (indice == -1) {
        printf("Le nombre %d n'est pas présent dans le tableau.\n", nombre);
    } else {
        printf("Le nombre %d est présent à l'indice %d.\n", nombre, indice);
    }



    return 0;
}


