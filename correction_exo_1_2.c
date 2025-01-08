/*
Trouver les extrêmes
  - Écrivez un programme en C qui demande à l'utilisateur d'entrer 10 nombres.
  - Votre programme doit déterminer et afficher le plus grand et le plus petit nombre de cette série.
  - Utilisez une boucle `for` pour saisir les nombres et des conditions pour trouver les extrêmes.
  - Ajoutez une fonctionnalité qui trie les nombres saisis dans un ordre croissant.
  - Affichez le tableau trié.


Note : on peut s'affranchir de taper les 10 nombres au début de chaque run en déclarant directement un tableau de nombres dans le prgramme, par exemple:
*/ 


#include <stdio.h>

int main() {

    // L'utilisateur entre 10 nombres, mais on n'utilise plus cette partie du code car ce n'est pas pratique de taper 10 nombres à chaque fois

    // int tab[10];
    // for (int i = 0; i < 10; i++) {
    //     printf("Entrez un nombre: ");
    //     scanf("%d", &tab[i]);
    // }

    // 1. Déclaration des valeurs
    // On déclare directement le tableau au lieu de demander à l'utilisateur d'entrer 10 nombres
    int tab[10] = {62, 12, 86, 1, 3, 5, 7, 9, 11, 13}; // accolades uniquement pour l'initialisation


    // 2. Trouver le minimum
    // Le principe pour trouver le minimum, est de commencer par dire que le minimum est égal au premier élément du tableau
    int min = tab[0];

    // On vérifie si les valeurs suivantes sont inférieures à la valeur actuelle de min.
    // Si c'est le cas, on met à jour min avec cette nouvelle valeur.
    // Sinon, min conserve sa valeur actuelle.

    // boucle for :
    // ...
}



    // 3. Trouver le maximum


    // 4. Tri du tableau
    // https://www.youtube.com/shorts/L3cAPN-YNEM


    // 5. Affichage du tableau trié