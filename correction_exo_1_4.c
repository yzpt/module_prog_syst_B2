/*
- Écrivez un programme qui demande à l'utilisateur de saisir 10 nombres.
- Calculez la moyenne de ces nombres.
- Affichez tous les nombres supérieurs à la moyenne et leur total.

*/ 


#include <stdio.h>

int main() {

    // On utilise un tableau prédéfini plutôt que de réclamer à l'utilisateur de rentrer 10 nombres
    int tableau[10] = {56, 12, 3, 4, 99, 23, 45, 67, 89, 101};

    int somme = 0;
    float moyenne = 0;

    // Calcul de la somme:
    for (int i = 0; i < 10; i++) {
        somme += tableau[i];
    }
    // Calcul de la moyenne:
    moyenne = (float)somme / 10; // On cast somme en float pour éviter la division entière
    


    // Affichage des nombres supérieurs à la moyenne:
    printf("Les nombres supérieurs à la moyenne sont :\n");
    for (int i=0; i<10; i++) {
        if (tableau[i] > moyenne) {
            printf("%d ", tableau[i]);
        }
    }

    printf("\n");


    return 0;
}


