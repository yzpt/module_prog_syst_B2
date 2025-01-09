# Mini-projet de programmation en langage C

Ce projet consiste à créer un programme qui permet de gérer un répertoire dans lequel seront enregistrés pour chaque personne les champs suivants:
- Nom
- Prénom
- Numéro de téléphone (sur 10 chiffres sans espace)
- Adresse mail

Chaque champ sera défini sous la forme d’un tableau de 50 chaînes de caractères. Pour gérer les chaînes de caractères, nous utiliserons les fonctions de la bibliothèque `<string.h>`.



## Guide 

1. Définir les variables à utiliser (nombre, nom, type); Préciser comment seront déclarées ces variables (locales ou globales).
2. Écrire une fonction qui permet d’ajouter une personne dans le répertoire.
3. Écrire une fonction qui permet d’afficher le contenu du répertoire.
4. Écrire une fonction qui permet de rechercher une personne dans le répertoire en spécifiant son numéro de téléphone.
   - Prévoir le cas où la personne recherchée n’est pas dans le répertoire.
   - Pour simplifier le problème, on suppose que chaque numéro de téléphone est unique.
5. Imaginer d’autres fonctions pour permettre la manipulation d’un tel répertoire.


## Base de code

```c
int main()
{
    int Action;

    while(1)
    {
        printf("Que voulez vous faire :\n");
        printf("* Ajouter une personne         (1)\n");
        printf("* Afficher le répertoire       (2)\n");
        printf("* Faire une recherche par nom  (3)\n");
        printf("* Retirer une personne par nom (4)\n");
        printf("* Terminer                     (5)\n");

        scanf("%d", &Action);
        if (Action == 1) Creer_Enregistrement();
        if (Action == 2) Affiche_Repertoire();
        if (Action == 3) Recherche();
        if (Action == 4) Retirer();
        if (Action == 5) break;

        printf("\n");
        printf("\n");
    }

    printf("terminé...");
    return 0;
}
```
