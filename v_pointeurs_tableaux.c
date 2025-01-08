#include <stdio.h>

void remplirTableau(int tab[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        tab[i] = 100 * i; 
        // on peut écrire aussi:
        // *(tab + i) = 100 * i;
        // car tab[i] <=> *(tab + i)
    }
}


// int main() {
//     char chaine[50];
//     int a;

//     // chaine contient l'adresse de la première case du tableau
//     // chaine <=> &(chaine[0])
//     // printf("%p\n", chaine);
//     // printf("%p\n", &chaine[0]);


//     printf("Quel est votre prénom ?\n");
//     scanf("%s", chaine);

//     printf("Quel est votre âge ?\n");
//     scanf("%d", &a);


//     printf("Bonjour %s, vous avez %d ans.\n", chaine, a);

//     return 0;
// }



int main() {
    int tab[10];
    int taille = 10;
    int i;

    for (i = 0; i < taille; i++)
        printf("tab[%d] = %d\n", i, tab[i]);
    

    remplirTableau(tab, taille);
    printf("\n-------------------\n");

    for (i = 0; i < taille; i++)
        printf("tab[%d] = %d\n", i, tab[i]);
    


    // tab <=> &(tab[0])
    // Explication: tab est l'adresse de la première case du tableau, donc tab <=> &(tab[0])
    printf("*(tab) <=> tab[0] = %d\n", *(tab));

    // tab + i <=> &(tab[i])
    // Explication: tab + i est l'adresse de la i-ème case du tableau, donc tab + i <=> &(tab[i])
    i= 5;
    printf("i = %d\n", i);
    printf("tab[i] = %d\n", tab[i]);
    printf("*(tab + i) = %d\n", *(tab + i));
    printf("tab + i = %p\n", tab + i);
    printf("&(tab[i]) = %p\n", &(tab[i]));
    printf("&(tab[5]) = %p\n", &(tab[5]));
    printf("&(tab[0]) = %p\n", &(tab[0]));
    printf("tab = %p\n", tab);

    return 0;
}