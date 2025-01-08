
#### 1. Écrire un programme en C qui afficher le message ‘Hello, World!’ sur l’écran.

```bash
Hello, World!

```


#### 2. Ecrivez un programme C qui affiche votre nom, votre date de naissance et votre numéro de téléphone portable. 

```bash
Nom               : Alex Babtise 
Date de naissance : Janvier 10, 2004
Tél               : 0785463521

```


#### 3. Écrire un programme en C permettant la saisie de deux nombres et l’affichage de leur somme.

```bash
Entrer 1er nombre: 10
Entrer 2éme nombre: 5
La somme de 10 et 5 = 15
```````````````````````````
Entrer 1er nombre: 2.5
Entrer 2éme nombre: 2.5
La somme de 2.5 et 2.5 = 5

```


#### 4. Ecrivez un programme C pour calculer le périmètre et la surface d’un rectangle d’une hauteur de 8 cm et d’une largeur de 4 cm. 

```bash
Périmètre du rectangle = 24 cm 
Surface du rectangle = 32 cm²

```


#### 5. Écrire un programme C pour calculer le périmètre et la surface d’un cercle dont le rayon est 5.

```bash
Périmètre du cercle = 31.4 cm 
Surface du cercle = 78.5 cm²

```


#### 6. Écrire un programme en C permettant de permuter le contenu de deux entiers n1 et n2 entrés par l’utilisateur, et afficher ces entiers après permutation.

```bash
Entrer un entier n1 : 10
Entrer un entier n2 : 5
``````permutation``````
n1 = 5
n2 = 10


```


#### 7. Écrire un programme en C pour calculer la factorielle d’un nombre entier saisi par l’utilisateur. (Remarque: le factoriel de 5, qui s’écrit 5! = 5 × 4 × 3 × 2 × 1).

```bash
Saisir un nombre : 5
Le factoriel de 5 est: 120

```


#### 8. Écrire un programme en C permettant d'afficher si un nombre saisi est pair ou impair.

```bash
Entrer un nombre: 8 
Nombre pair
``````````````````--
Entrer un nombre: 1
Nombre impair

```


#### 9. Écrire un programme en C permettant d'afficher le plus grand des 3 nombres saisis au clavier.

```bash
Entrer 1er nombre : 2
Entrer 2éme nombre: 9
Entrer 3éme nombre: 7
Le nombre le plus grand est: 9

```


#### 10. A quoi sert le programme en C suivant?

```bash
#include <stdio.h>

int main() 
{
	int nbr = 0;
	
	printf("Entrez un nombre entre 1 et 5:"); 
	
	do{
		scanf("%d",&nbr);
		if(nbr < 1 || nbr > 5)
			printf("Nombre incorrect. Recommencez!")
	}while(nbr < 1 || nbr > 5);

	return 0; 
}

```


#### 11. Écrire un programme en C qui calcule la valeur absolue d'un nombre saisi par l'utilisateur.

```bash
Entrer un nombre: -5
La valeur absolue de -5 est 5

```


#### 12. Écrire un programme en C qui calcule la moyenne de 3 nombres entrés par l'utilisateur.

```bash
Entrer 1er nombre :  5
Entrer 2éme nombre:  7
Entrer 3éme nombre:  3
La moyenne est : 5

```


#### 13. Écrire un programme en C qui affiche 10 fois "Hello". En utilisant la boucle "while".

```bash
Hello
Hello
Hello
Hello
Hello
Hello
Hello
Hello
Hello
Hello

```


#### 14. Ecrivez un programme en C qui calcule la somme de 1 à 10. En utilisant la boucle "while".

```bash
1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 = 55
La somme de 1 à 10 est 55

```


#### 15. Ecrivez un programme en C qui calcule la somme de 1 à N, où N est saisi par l'utilisateur. En utilisant la boucle "while".

```bash
1 + 2 + 3 + 4 + 5 + 6 + 7 = 28
Entrer un nombre: 7
La somme de 1 à 7 est 28

```


#### 16. Ecrivez un programme en C qui affiche "Hello" 10 fois. En utilisant la boucle "for".

```bash
Hello
Hello
Hello
Hello
Hello
Hello
Hello
Hello
Hello
Hello

```


#### 17. Ecrivez un programme en C qui calcule la somme de 1 à 10. En utilisant la boucle "for".

```bash
1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 = 55
La somme de 1 à 10 est 55

```


#### 18. Ecrivez un programme en C qui calcule la somme de 1 à N, où N est saisi par l'utilisateur. En utilisant la boucle "for".

```bash
1 + 2 + 3 + 4 + 5 + 6 + 7 = 28
Entrer un nombre: 7
La somme de 1 à 7 est 28

```


#### 19. Écrire un programme en C qui affiche la table de multiplication de 3. En utilisant la boucle "for".

```bash
3 x 0 = 0
3 x 1 = 3
3 x 2 = 6
3 x 3 = 9
3 x 4 = 12
3 x 5 = 15
3 x 6 = 18
3 x 7 = 21
3 x 8 = 24
3 x 9 = 27
3 x 10= 30  

```


#### 20. Écrire un programme en C qui affiche la table de multiplication d'un entier saisi par l'utilisateur, en utilisant la boucle "for".

```bash
Entrer un nombre: 7
7 x 0 = 0
7 x 1 = 7
7 x 2 = 14
7 x 3 = 21
7 x 4 = 28
7 x 5 = 35
7 x 6 = 42
7 x 7 = 49
7 x 8 = 56
7 x 9 = 63
7 x 10= 70

```


#### 21. Ecrivez un programme en C qui affiche "Hello" 10 fois. En utilisant la boucle "do-while".

```bash
Hello
Hello
Hello
Hello
Hello
Hello
Hello
Hello
Hello
Hello

```


#### 22. Ecrivez un programme en C qui calcule la somme de 1 à 10. En utilisant la boucle "do-while".

```bash
1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 = 55
La somme de 1 à 10 est 55

```


#### 23. Écrire un programme en C qui affiche la table de multiplication de 2. En utilisant la boucle "do-while".

```bash
2 x 0 = 0
2 x 1 = 2
2 x 2 = 4
2 x 3 = 6
2 x 4 = 8
2 x 5 = 10
2 x 6 = 12
2 x 7 = 14
2 x 8 = 16
2 x 9 = 18
2 x 10= 20  

```


#### 24. Écrire un programme C pour convertir les jours spécifiés en années, semaines et jours. Note : Ne pas tenir en compte les années bissextiles.

```bash
Entrez le nombre de jours: 2570
Années: 7
Semaines: 2
Jours: 1

```


#### 25. Écrivez un programme C qui accepte le nombre total d'heures travaillées au cours d'un mois et le montant que l'employé a reçu par heure. Affichez le salaire (avec deux décimales) de l'employé pour un mois donné.

```bash
Saisir les heures de travail: 7
Montant du salaire/heure: 2000 

Salaire = 14000.00 €

```


#### 26. Écrire un programme en C pour afficher les nombres pairs entre 0 et N, où N est saisi par l'utilisateur.

```bash
Entrer un nombre :  9
0  2  4  6  8 

```


#### 27. Ecrivez un programme en C qui calcule la somme des nombres impairs compris entre 1 et un nombre entier N saisi par l'utilisateur. Exemple N=10 Somme=1+3+5+7+9=25

```bash
Entrer un nombre :  10
La somme des nombres impairs est: 25

```


#### 28. Écrire un programme en C permettant de calculer le plus grand commun diviseur (PGCD) entre deux nombres entiers entrés par l'utilisateur.

```bash
n1=18 et n2=45
PGCD(18, 45) = 9
Entrer deux nombres: 18  45
Le PGCD est : 9

```


#### 29. Écrire un programme en C qui affiche un triangle d'entiers, en fonction d'un entier N saisi par l'utilisateur.

```bash
Donner un nombre: 7
1
22
333
4444
55555
666666
7777777

```


#### 30. Ecrire un programme en C qui compte le nombre de chiffres dans un nombre saisi par l'utilisateur.

```bash
Donner un nombre: 9876
Le nombre de chiffres est 4

```


#### 31. Écrire un programme C pour calculer la consommation moyenne d’une voiture à partir d’une distance parcourue (en km, valeur entière) et du carburant consommé (en litres, nombre flottant).

```bash
Entrer la distance totale en km: 470 
Entrer le carburant total dépensé en litres: 5

Consommation moyenne (km/litre) = 94.000

```


#### 32. Écrire un programme C pour calculer la distance entre deux points.

```bash
Entrée x1: 10
Entrée y1: 18 

Entrée x2: 40 
Entrée y2: 20 

Distance entre ces points est: 30.0666

```


#### 33. Ecrivez une fonction pour calculer la somme de deux nombres. Si les deux nombres sont identiques, le programme renvoie le triple de leur somme.

```bash
foncSomme(1,2) -> 3
foncSomme(2,2) -> 12

```


#### 34. Écrivez un programme C qui vérifie deux entiers donnés et renvoie TRUE si au moins l’un d’entre eux est égal à 20 ou si leur somme est égale à 20.

```bash
check(15, 5) ->  TRUE
check(15, 20) ->  TRUE
check(15, 25) ->  FALSE

```


#### 35. Ecrivez un programme C qui vérifie si un entier positif est divisible par 3 ou 7, ou les deux. Si l’entier est un multiple de 3, le programme retournera TRUE. De même, si l’entier est un multiple de 7, le programme renvoie également TRUE. Si l’entier n’est pas un multiple de 3 ou de 7, le programme renvoie FALSE.

```bash
check(3) ->  TRUE
check(12) ->  TRUE
check(4) ->  FALSE

```


#### 36. Ecrivez un programme en C pour inverser les chiffres d’un nombre saisi par l’utilisateur.

```bash
Donner un nombre: 123
321

```


#### 37. Écrire un programme en C permettant d’entrer un nombre et d’afficher le triangle d’étoiles.

```bash
Entrez un nombre: 5
    *
   ***
  *****
 *******
*********

```


#### 38. Écrire un programme en C qui permet de savoir si le nombre saisi est Premier ou non. (Un nombre premier est un nombre uniquement divisible par 1 ou par lui-même).

```bash
Entrer un nombre : 29
29 est un nombre premier

Entrer un nombre : 21
21 n'est pas un nombre premier

```


#### 39. Écrire un programme en C qui prend deux entiers de l'utilisateur (un nombre de base et un exposant) et calcule la puissance.

```bash
Entrer la base: 2
Entrer l'exposant: 3
2 ^ 3 = 8

```


#### 40. Ecrivez un programme en C qui demande l'âge et permet de renseigner sa catégorie sachant que les catégories sont les suivantes:

```bash
Entrer votre age : 6
Vous êtes Gamin

```


#### 41. Un magasin offre à ses clients 25% de réduction sur les montants d’achat supérieurs à 500 €. Ecrivez un programme en C qui permet d’entrer le prix total hors TVA et de calculer le montant TTC en tenant compte de la remise et du fait que la TVA = 20%.

```bash
Entrer le montant HT: 100
Le montant TTC est: 120.0

```


#### 42. Écrire un programme en C qui demande à l’utilisateur deux nombres n1 et n2 et lui indique ensuite si le produit de ces deux nombres est positif ou négatif. On prévoit dans le programme le cas où le produit peut être nul.

```bash
Entrer le 1er nombre:  -1.5
Entrer le 2éme nombre:  3
Le produit est négatif
```````````````````````````--
Entrer le 1er nombre:   1
Entrer le 2éme nombre:  3
Le produit est positif
```````````````````````````--
Entrer le 1er nombre:   0
Entrer le 2éme nombre:  3
Le produit est nul

```


#### 43. Écrire un programme en C qui permette d’ajouter un commentaire sur le score saisi au clavier (si le score est supérieur à 10 alors il affiche « GOOD! » sinon « NOT GOOD! » (NB: le score est compris entre 0 et 20!).

```bash
Entrer le score: 15.5
GOOD!

Entrer le score: 5
NOT GOOD!

Entrer le score: -5
Score invalide!

```


#### 44. Le service de photocopie de votre université facture 0,50 € pour les 10 premières photocopies, 0,45 € pour les 20 suivantes et 0,30 € au-delà de 30 photocopies. Ecrivez un programme en C qui demande à l'utilisateur le nombre de photocopies réalisées et affiche la facture correspondante.

```bash
Entrez le nombre de papies: 25
Le prix total est: 11.25 €

```


#### 45. Ecrivez un programme en C qui teste l'égalité de deux tableaux de nombres entiers (tailles 5). Le programme affiche TRUE si les éléments des deux tableaux correspondent, sinon il affiche FALSE.

```bash
1	2	3	4	5
1	2	3	4	5
TRUE

10	20	30	40	50
20	30	40	50	60
FALSE

```


#### 46. Écrire un programme en C qui permet la saisie de 5 nombres et qui calcule la différence entre la somme des nombres pairs et la somme des nombres impairs.

```bash
Entrer un nombre: 3
Entrer un nombre: 5
Entrer un nombre: 2
Entrer un nombre: 4
Entrer un nombre: 6
La différence égale à 4

```


#### 47. Écrire un programme en C qui permet à l'utilisateur d'entrer une série de nombres se terminant par 0, et qui affiche à la fin le nombre d'occurrences du nombre 3.

```bash
2	8	3	1	3	3	6	3	0
3 existe 4 fois

```


#### 48. Écrire un programme en C pour afficher les mois en lettres en fonction du nombre saisi par l'utilisateur.

```bash
Entrer le numéro du mois: 1
Janvier

Entrer le numéro du mois: 3
Mars

Entrer le numéro du mois: 12
Décembre

```


#### 49. Écrire un programme en C qui calcule les nombres de Fibonacci jusqu'à 50.

```bash
Fibonacci jusqu'à 50: 1  1  2  3  5  8  13  21  34

```


#### 50. Écrire un programme en C qui calculera une somme courante. L'utilisateur saisira des nombres qui seront ajoutés à la somme et, lorsqu'un nombre négatif sera rencontré, arrêtera d'ajouter des nombres et écrira le résultat final.

```bash
1 2 3 4 -1
La somme est 10

```


#### 51. Écrire un programme en C qui convertit une température en degrés Celsius en degrés Fahrenheit. Utilisez les variables « celsius », « fahrenheit » et la formule de conversion pour effectuer le calcul.

```bash
Entrez la température en degrés Celsius: 45
La température en Fahrenheit est: 113

```


#### 52. Écrire un programme en C qui permute ou échange deux nombres saisis par l’utilisateur, mais avec seulement deux variables N1 et N2 sans utiliser une variable temporaire.

```bash
Entrer le nombre N1 : 10
Entrer le nombre N2 : 5
``````permutation``````
N1 = 5
N2 = 10


```


#### 53. Écrire un programme en C qui permute et affiche les valeurs des trois nombres (N1, N2 et N3) saisis par l’utilisateur, en ordre croissant c’est-à-dire (N1 < N2 < N3).

```bash
Entrer le nombre N1 : 10
Entrer le nombre N2 : 1
Entrer le nombre N3 : 5
``````permutation``````
N1 = 1
N2 = 5
N3 = 10


```


#### 54. Écrire une fonction qui vérifie deux températures données et renvoie TRUE si l’une des températures est inférieure à 0 et l’autre supérieure à 50, sinon il renvoie FALSE.

```bash
checkTemp(100, -1) -> TRUE
checkTemp(2, 100) -> FALSE

```


#### 55. Écrire une fonction qui affiche si le nombre passé en paramètre est pair ou impair.

```bash
3 est impair.
2 est pair.

```


#### 56. Écrire une fonction qui retourne le nombre de caractères dans une chaîne de caractères passée en paramètre.

```bash
Entrez une chaîne de caractères: Hello
Le nombre de caractères est: 5

```


#### 58. Écrire une fonction qui permet de calculer la valeur absolue d’un nombre donné (en utilisant l’opérateur ternaire ?: ).

```bash


```


#### 59. Écrire une fonction qui trouve le nombre de fois un caractère se trouve dans une chaîne de caractères. La fonction prend en paramètre le caractère à trouver et la chaîne de caractères.

```bash


```


#### 60. Écrire une fonction qui permet d'afficher la table de multiplication d’un nombre N.

```bash


```


#### 61. Ecrivez un programme C pour vérifier deux entiers donnés si l’un d’eux est compris dans l’intervalle 0…50 inclus.

```bash
checkNbr(1,20) -> TRUE
checkNbr(51,60) -> FALSE

```


#### 62. Ecrivez un programme C pour vérifier quel est le nombre le plus proche de la valeur 100 parmi deux nombres entiers donnés. Il renvoie 0 si les deux nombres sont égaux.

```bash
nbrProche(80,98) -> 98
nbrProche(70,70) -> 0
nbrProche(90,50) -> 90

```


#### 63. Écrire un programme C pour trouver le troisième angle d'un triangle si deux angles sont donnés.

```bash
Entrée deux angles du triangle séparés par une virgule: 80,40 
Troisième angle du triangle: 60

```


#### 64. Écrire un programme C pour effectuer l'addition, la soustraction, la multiplication, la division et le reste de la division de deux nombres.

```bash
Entrez deux nombres séparés par une virgule: 20,10
La somme est: 30
La soustraction est: 10 
Le produit est: 200 
La division est: 2
Le reste de la division est: 0 

```


#### 65. Ecrivez un programme en C pour calculer la somme de trois nombres saisis sur une ligne et séparés par une virgule.

```bash
Entrez trois nombres séparés par une virgule: 5,20,10 
La somme des trois nombres est: 35

```


#### 66. Écrire un programme en C qui lit le prénom, le nom et l'année de naissance et les affichent l'un après l'autre.

```bash
Saisissez votre prénom: Alex
Saisissez votre nom: Babtise
Saisissez votre année de naissance: 1994

Alex Babtise 1994

```


#### 67. Écrire un programme en C qui prend les minutes en entrée et affiche le nombre total d'heures et de minutes.

```bash
Entrez le nombre de minutes: 620
10 heures, 20 minutes

```


#### 68. Ecrivez un programme C qui prend en entrée les heures et les minutes et calcule le nombre total de minutes.

```bash
Entrez le nombre de heures: 10
Entrez le nombre de minutes: 20
Le nombre total de minutes est: 620

```


#### 69. Écrire un programme C qui convertit les kilomètres par heure en miles par heure. 

```bash
Entrer les kilomètres par heure: 20 
12.427424 miles par heure

```


#### 70. Écrire un programme C qui affiche le périmètre d'un rectangle en utilisant sa hauteur et sa largeur comme entrée. 

```bash
Saisir la hauteur du rectangle: 4
Saisir la largeur du rectangle: 6
Le périmètre du rectangle est: 20.000000

```


#### 71. Écrire un programme C qui calcule le volume d’une sphère.

```bash
Entrez le rayon de la sphère: 3.5 
Le volume de la sphère est: 179.594391.

```


#### 72. Écrire un programme C pour convertir une chaîne de caractères (ex:’3.14′) en un double.

```bash
Le double converti est: 3.14

```


#### 73. Écrire un programme C pour générer un nombre aléatoire. 

```bash
Le nombre aléatoire est: 5332

```


#### 74. Écrire un programme C pour calculer le quotient et le reste d’une division.

```bash
Entrez le numérateur: 200 
Entrez le dénominateur: 150
quotient = 1, reste = 50

```


#### 75. Écrire un programme C pour récupérer la chaîne d’environnement « PATH ».

```bash
La chaîne d'environnement "PATH" est: /usr/local/mysql/bin:/usr/local/java/bin:

```


#### 76. Écrire un programme C pour convertir une chaîne de caractères (ex:’10’) en un entier.

```bash
La valeur entier converti est: 10

```


#### 77. Ecrivez un programme C pour vérifier si deux ou plusieurs nombres entiers non négatifs ont le même chiffre à droite.

```bash
checkList(11,21,41) -> TRUE
checkList(11,25,41) -> TRUE
checkList(13,21,46) -> FALSE

```


#### 78. Ecrivez un programme C pour vérifier s’il est possible d’additionner deux entiers pour obtenir le troisième entier à partir de trois entiers donnés.

```bash
checkSum(1,2,3) -> TRUE
checkSum(5,5,10) -> TRUE
checkSum(2,2,1) -> FALSE

```


#### 79. Écrire un programme C qui vérifie si un nombre non négatif donné est un multiple de 3 ou de 7, mais pas les deux.

```bash
checkNbr(3) -> TRUE
checkNbr(7) -> TRUE
checkNbr(21) -> FALSE

```


#### 80. Écrivez un programme C qui accepte deux entiers et vérifie si l’un d’eux est 6 ou si leur somme ou différence est 6. Si l’une de ces conditions est remplie, le programme renvoie true. Dans le cas contraire, il renvoie false.

```bash
checkNbr(6,1) -> TRUE
checkNbr(3,3) -> TRUE
checkNbr(3,2) -> FALSE

```


#### 81. Ecrivez un programme C qui accepte deux entiers et vérifie s’ils sont égaux ou non. 

```bash
Entrez deux nombres N1 et N2: 20 20
N1 et N2 sont égaux.
`````````````````````````````````-
Entrez deux nombres N1 et N2: 8 6
N1 et N2 ne sont pas égaux.

```


#### 82. Écrire un programme C pour vérifier si un nombre donné est positif ou négatif.

```bash
Entrez un nombre: 3
3 est un nombre positif
````````````````````````
Entrez un nombre: -3
-3 est un nombre négatif

```


#### 83. Ecrivez un programme C pour déterminer si une année donnée est bissextile ou non.

```bash
Entrez une année: 2024
2024 est une année bissextile.

```


#### 84. Écrire un programme C pour lire l’âge d’un candidat et déterminer s’il a le droit de voter.

```bash
Entrez votre age: 21
Bienvenue. Vous êtes éligible pour voter.

Entrez votre age: 17
Désolé, vous n'avez pas le droit de voter.

```


#### 85. Écrire un programme C pour lire la température et afficher un message approprié en fonction de l'état de température ci-dessous: 

```bash
Entrez la températures: 21
Températures normales

```


#### 86. Écrire un programme C pour vérifier si un triangle est équilatéral, isocèle ou scalène.

```bash
Entrer les trois côtés du triangle: 40 40 50
Il s'agit d'un triangle isocèle.

```


#### 87. Ecrivez un programme C pour vérifier si un triangle peut être formé avec les valeurs données pour les angles. 

```bash
Entrer les trois angles du triangle: 70 75 60
Le triangle n'est pas valide.

```


#### 88. Écrire un programme C pour vérifier si un caractère est un alphabet, un chiffre ou un caractère spécial. 

```bash
Saisir un caractère: #
Il s'agit d'un caractère spécial.

```


#### 89. Écrire un programme C pour vérifier si un alphabet est une voyelle ou une consonne.

```bash
Entrez une lettre quelconque de l'alphabet: a
La lettre est une voyelle.

```


#### 90. Écrire un programme C pour calculer les pertes et profits sur une transaction.

```bash
Prix de vente: 500
Prix du coût en entrée: 300 
Vous pouvez provisionner le montant de votre bénéfice: 200

```


#### 91. Écrire un programme C pour afficher les nombres de 0 à 10 et de 10 à 0 en utilisant deux boucles « while ».

```bash
Nombres de 0 à 10:
0 1 2 3 4 5 6 7 8 9 10

Nombres de 10 à 0:
10 9 8 7 6 5 4 3 2 1 0

```


#### 92. Écrivez un programme C qui invite l’utilisateur à saisir une série d’entiers jusqu’à ce que l’utilisateur arrête d’entrer 0 en utilisant une boucle while. Calculez et affichez la somme de tous les entiers positifs entrés.

```bash
Entrez des nombres entiers (entrez 0 pour arrêter):
Entrer un nombre : 6
Entrer un nombre : 2
Entrer un nombre : 1
Entrer un nombre : -6
Entrer un nombre : -7
Entrer un nombre : 0
Entrée d'un nombre : -30
Entrée d'un nombre : 3
Somme de nombres positifs: 12

```


#### 93. Écrivez un programme C qui calcule le produit des nombres de 1 à 5 à l’aide d’une boucle while.

```bash
Nombre actuel: 1, Produit actuel: 1
Nombre actuel: 2, Produit actuel: 2
Nombre actuel: 3, Produit actuel: 6
Nombre actuel: 4, Produit actuel: 24
Nombre actuel: 5, Produit actuel: 120

```


#### 94. Ecrivez un programme C qui invite l'utilisateur à saisir une série de chiffres jusqu'à ce qu'il saisisse un chiffre dupliqué. Utilisez une boucle while pour vérifier les duplications. 

```bash
Entrez des nombres (Entrez un doublon si vous voulez arrêter):
Saisir un nombre: 5
Saisir un nombre: 9
Saisir un nombre: 2
Saisir un nombre: 7
Saisir un nombre: 3
Saisir un nombre: 2
Un doublon a été saisi. Le programme s'arrête.

```


#### 95. Écrivez un programme C qui génère un nombre aléatoire entre 1 et 20 et demande à l'utilisateur de le deviner. Utilisez une boucle while pour donner à l'utilisateur plusieurs chances jusqu'à ce qu'il devine le bon nombre.

```bash
Devinez un nombre entre 1 et 20:
Saisissez votre nombre: 5
Réponse incorrecte. Réessayez!
Saisissez votre nombre: 9
Réponse incorrecte. Réessayez!
Saisissez votre nombre: 2
Réponse incorrecte. Réessayez!
Saisissez votre nombre: 7
Réponse incorrecte. Réessayez!
Saisissez votre nombre: 3
Félicitations! Vous avez deviné le bon nombre en 5 tentatives.

```


#### 96. Ecrivez un programme C qui demande à l'utilisateur de saisir un nom d'utilisateur. Utilisez une boucle while pour continuer à demander un nom d'utilisateur jusqu'à ce qu'un nom valide soit saisi (par ex, au moins 8 caractères).

```bash
Entrez un nom d'utilisateur (au moins 8 caractères): alex00
Erreur: Le nom d'utilisateur doit comporter au moins 8 caractères.

Entrez un nom d'utilisateur (au moins 8 caractères): alex_babtise
Nom d'utilisateur valide.

```


#### 97. Écrire un programme C qui calcule et affiche la somme des cubes des nombres pairs jusqu'à une limite spécifiée (par exemple, 10) à l'aide d'une boucle while.

```bash
Somme des cubes des nombres pairs jusqu'à 10: 1800

```


#### 98. Écrire un programme C qui permet de vérifier si un nombre donné est un palindrome à l'aide d'une boucle while.

```bash
Entrez un nombre: 12345
12345 n'est pas un palindrome.
``````````````````````````````-
Entrez un nombre: 2222
2222 est un palindrome.

```


#### 99. Ecrivez un programme C pour trouver et afficher les 10 premiers nombres de Fibonacci à l'aide d'une boucle while.

```bash
Les 10 premiers nombres de Fibonacci:
0, 1, 1, 2, 3, 5, 8, 13, 21, 34,

```


#### 100. Écrire un programme C pour inverser un nombre donné à l'aide d'une boucle "do-while".

```bash
Entrez un nombre: 12345
Nombre inversé: 54321

```


#### 101. Écrire un programme C qui calcule et affiche la somme des nombres premiers jusqu’à une limite spécifiée (par exemple, 50) en utilisant une boucle « do-while ».

```bash
Entrez la limite des nombres premiers: 40
Somme des nombres premiers jusqu'à 40 est 197

```


#### 102. Écrire un programme C qui invite l'utilisateur à saisir un mot de passe. Utilisez une boucle do-while pour continuer à demander le mot de passe jusqu'à ce que celui correct. En supposant que le mot de passe correct est w@yToLearnX.

```bash
Saisir le mot de passe : alex!-19
Mot de passe incorrect. Réessayez.
Saisir le mot de passe : hello123
Mot de passe incorrect. Réessayez.
Saisissez le mot de passe : w@yToLearnX
Mot de passe correct ! L'accès est accordé.

```


#### 103. Écrire un programme en C pour afficher les 10 premiers nombres naturels.

```bash
Les 10 premiers entiers naturels sont:
1 2 3 4 5 6 7 8 9 10

```


#### 104. Écrire un programme C pour calculer la somme des 10 premiers nombres naturels. 

```bash
Les 10 premiers entiers naturels sont:
1 2 3 4 5 6 7 8 9 10
La somme est: 55

```


#### 105. Écrire un programme en C pour afficher n éléments du nombre naturel et leur somme. 

```bash
Entrée le nombre des éléments: 5

Les 5 premiers entiers naturels sont:
1 2 3 4 5 
La somme des nombres naturels jusqu'à 5 termes est 15.

```


#### 106. Écrire un programme en C pour lire 10 nombres à partir du clavier et trouver leur somme et leur moyenne. 

```bash
Saisir les 10 nombres:
Nombre-1: 2
Nombre-2: 6
....
Nombre-10: 3
La somme est: 45
La moyenne est: 4.500000

```


#### 107. Écrire un programme en C pour afficher le cube du nombre jusqu'à un entier N donné en utilisant la boucle 'for'.

```bash
Entrée le nombre des éléments: 4
Le nombre est: 1 et le cube de 1 est: 1
Le nombre est: 2 et le cube de 2 est: 8
Le nombre est: 3 et le cube de 3 est: 27
Le nombre est: 4 et le cube de 4 est: 64

```


#### 108. Écrire un programme en C pour afficher une forme de triangle droit à l'aide des étoiles. En utilisant la boucle 'for'.

```bash
Entrer le nombre de lignes: 4
*
**
***
****

```


#### 109. Écrire un programme en C pour afficher une forme de triangle droit à l'aide des nombres. En utilisant la boucle 'for'.

```bash
Entrer le nombre de lignes: 4
1
12
123
1234

```


#### 110. Écrire un programme en C pour afficher une forme de triangle droit avec un nombre qui répétera un nombre dans une ligne. En utilisant la boucle 'for'.

```bash
Entrer le nombre de lignes: 4
1
22
333
4444

```


#### 111. Écrire un programme en C pour afficher une forme de triangle droit avec un nombre qui s’incrémente de 1. En utilisant la boucle ‘for’.

```bash
Entrer le nombre de lignes: 4
1
2 3
4 5 6
7 8 9 10

```


#### 112. Ecrivez un programme en C pour créer une pyramide avec des nombres qui s'incrémente de 1. En utilisant la boucle 'for'.

```bash
Entrer le nombre de lignes: 4
   1 
  2 3 
 4 5 6 
7 8 9 10

```


#### 113. Ecrivez un programme C pour créer une pyramide avec des étoiles. En utilisant la boucle 'for'.

```bash
Entrer le nombre de lignes: 4
   * 
  * * 
 * * * 
* * * *

```


#### 114. Ecrivez un programme C pour afficher une pyramide des étoiles, chaque ligne contenant un nombre impair d'étoiles. En utilisant la boucle 'for'.

```bash
Entrer le nombre de lignes: 4
   *
  ***
 *****

```


#### 115. Ecrivez un programme C pour créer une pyramide avec un nombre qui répétera le nombre dans la même ligne. En utilisant la boucle 'for'.

```bash
Entrer le nombre de lignes: 4
   1
  2 2
 3 3 3
4 4 4 4

```


#### 116. Ecrivez un programme en C pour afficher le triangle de Floyd. En utilisant la boucle 'for'.

```bash
Entrer le nombre de lignes: 5
1 
01
101 
0101 
10101

```


#### 117. Écrire un programme en C pour afficher un dessin comme un diamant. En utilisant la boucle 'for'.

```bash
Entrer le nombre de lignes (moitié du diamant): 5
    *
   *** 
  *****
 *******
********* 
 *******
  *****
   ***
    *

```


#### 118. Écrire un programme C pour afficher le triangle de Pascal. En utilisant la boucle 'for'.

```bash
Entrer le nombre de lignes: 5
        1
      1   1 
    1   2   1 
  1   3   3   1
1   4   6   4   1

```


#### 119. Ecrivez un programme C pour afficher un tel schéma pour n lignes en utilisant un nombre qui commence par 1 et chaque ligne aura un 1 comme premier et dernier chiffre.

```bash
Entrer le nombre de lignes: 3
  1
 121
12321

```


#### 120. Ecrivez un programme C pour afficher le dessin de la pyramide à l'aide des alphabets.

```bash
Entrer le nombre de lettres: 4
        A
      A B A 
    A B C B A
  A B C D C B A

```


#### 121. Écrire un programme C pour afficher la somme de n termes de nombres naturels pairs. 

```bash
Entrez le nombre de termes: 5 
Les nombres pairs sont: 2 4 6 8 10 
La somme des nombres pairs jusqu'à 5 termes est 30

```


#### 122. Ecrivez un programme en C pour trouver la somme de la série [1 - X^2/2! + X^4/4! - ...].

```bash
Entrer la valeur de x: 4
Entrer le nombre de termes: 10
La somme = -0.653644
Valeur de x = 4.000000

```


#### 123. Ecrivez un programme en C pour afficher les n termes d'une série harmonique et leur somme. 1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n termes.

```bash
Entrer le nombre de termes: 6
1/1 + 1/2 + 1/3 + 1/4 + 1/5 + 1/6
Somme des séries jusqu'à 6 termes est 2.450000

```


#### 124. Ecrivez un programme en C pour afficher la somme de la série [ 5 + 55 + 555 + 5555 ...].

```bash
Entrer le nombre de termes: 6
5 55 555 5555 55555 555555
La somme de la série est 617280

```


#### 125. Ecrivez un programme en C pour trouver la somme de la série [x - x^3 + x^5 + ...]. 

```bash
Entrer la valeur de x: 4
Entrer le nombre de termes: 10
La somme = 54.154144

```


#### 126. Ecrivez un programme C pour vérifier si un nombre donné est un nombre "parfait" ou non. 

```bash
Entrer le nombre: 80
Le diviseur positif: 1  2  4  5  8  10  16  20  40
La somme du diviseur est: 106 
Le nombre n'est donc pas parfait.

```


#### 127. Écrire un programme C pour trouver les nombres "parfaits" compris dans un intervalle donné. 

```bash
Entrer la plage de départ: 1 
Entrer la plage de fin: 50 
Les nombres parfaits dans l'intervalle donné sont 6 28

```


#### 128. Écrire un programme C pour vérifier si un nombre donné est un nombre Armstrong ou non.

```bash
Entrer un nombre: 153
153 est un nombre Armstrong.

```


#### 129. Écrire un programme C pour trouver le nombre Armstrong compris dans un intervalle donné.

```bash
Entrer la plage de départ: 1 
Entrer la plage de fin: 400 
Les nombres Armstrong dans l'intervalle donné sont 1 153 370 371

```


#### 130. Écrire un programme en C pour convertir un nombre décimal en binaire.

```bash
Entrer un nombre décimal: 5
Le nombre binaire est: 101

```


#### 131. Écrire un programme en C pour convertir un nombre binaire en décimal.

```bash
Entrer un nombre binaire: 101
Le nombre décimal est: 5

```


#### 132. Ecrivez un programme C pour vérifier si un nombre est un nombre fort ou non.

```bash
Entrer un nombre: 10
10 n'est pas un nombre fort.

```


#### 133. Écrire un programme C pour trouver les nombres forts dans une plage donnée de nombres.

```bash
Entrer la plage de départ: 1 
Entrer la plage de fin: 300 
Les nombres forts dans l'intervalle donné sont 1  2  145

```


#### 134. Écrire un programme en C pour convertir un nombre décimal en octal.

```bash
Entrer un nombre décimal: 25
Le nombre octal est: 31

```


#### 135. Écrire un programme en C pour convertir un nombre octal en décimal.

```bash
Entrer un nombre octal: 31
Le nombre décimal est: 25

```


#### 136. Écrire un programme C pour convertir un nombre binaire en octal.

```bash
Entrer un nombre binaire: 101
Le nombre octal est: 5

```


#### 137. Écrire un programme C pour convertir un nombre octal en binaire.

```bash
Entrer un nombre octal: 5
Le nombre binaire est: 101

```


#### 138. Écrire un programme C pour convertir un nombre décimal en hexadécimal.

```bash
Entrer un nombre décimal: 10
Le nombre hexadécimal est: A

```


#### 139. Écrire un programme C pour convertir un nombre hexadécimal en décimal.

```bash
Entrer un nombre hexadécimal: A
Le nombre décimal est: 10

```


#### 140. Ecrire un programme en C pour vérifier si un nombre peut être exprimé comme la somme de deux nombres premiers. 

```bash
Entrer un nombre entier positif: 16 
16 peut s'écrire comme suit 5 + 11.
16 peut s'écrire comme suit 3 + 13.

```


#### 141. Écrire un programme C pour afficher une chaîne de caractères dans l’ordre inverse.

```bash
Entrez la chaîne à inverser: Hello
La chaîne inversée est: olleH

```


#### 142. Écrire un programme C pour trouver la longueur d'une chaîne de caractères sans utiliser la fonction strlen().

```bash
Entrez la chaîne de caractères: Hello
La longueur de la chaîne de caractères est: 5

```


#### 143. Écrire un programme en C pour lire n nombre de valeurs dans un tableau et les afficher dans l'ordre inverse. 

```bash
Entrer le nombre d'éléments à stocker dans le tableau: 3 
Entrer les 3 éléments dans le tableau: 
tab[0]: 8 
tab[1]: 4 
tab[2]: 5
Les valeurs stockées dans le tableau sont: 8 4 5
Les valeurs stockées dans le tableau en sens inverse sont: 5 4 8

```


#### 144. Écrire un programme en C pour copier les éléments d'un tableau dans un autre tableau.

```bash
Entrer le nombre d'éléments à stocker dans le tableau: 3 
Entrer les 3 éléments dans le tableau: 
tab[0]: 8 
tab[1]: 4 
tab[2]: 5
Les valeurs stockées dans le tableau sont: 8 4 5
Les éléments copiés dans le 2ème tableau sont: 8 4 5

```


#### 145. Écrire un programme en C pour compter le nombre total d'éléments dupliqués dans un tableau. 

```bash
Entrer le nombre d'éléments à stocker dans le tableau: 4 
Entrer les 4 éléments dans le tableau: 
tab[0]: 5
tab[1]: 1 
tab[2]: 1
tab[3]: 1
Le nombre total d'éléments dupliqués trouvés dans le tableau est: 2

```


#### 146. Écrire un programme en C pour afficher tous les éléments uniques d'un tableau.

```bash
Entrer le nombre d'éléments à stocker dans le tableau: 4 
Entrer les 4 éléments dans le tableau: 
tab[0]: 5
tab[1]: 7 
tab[2]: 7
tab[3]: 1
Les éléments uniques trouvés dans le tableau sont: 5 1

```


#### 147. Écrire un programme en C pour fusionner deux tableaux de même taille triés par ordre décroissant. 

```bash
Entrer le nombre d'éléments à stocker dans le tableau: 3 
Entrer les 3 éléments dans le tableau: 
tab[0]: 1
tab[1]: 2 
tab[2]: 3
Entrer le nombre d'éléments à stocker dans le tableau: 3 
Entrer les 3 éléments dans le tableau: 
tab[0]: 1
tab[1]: 2 
tab[2]: 3
Le tableau fusionné par ordre décroissant est: 3   3   2   2   1   1

```


#### 148. Écrire un programme en C pour compter la fréquence de chaque élément dans le tableau.

```bash
Entrer le nombre d'éléments à stocker dans le tableau: 3 
Entrer les 3 éléments dans le tableau: 
tab[0]: 8
tab[1]: 8 
tab[2]: 9
La fréquence de tous les éléments du tableau: 
8 se produit 2 fois
9 se produit 1 fois

```


#### 149. Écrire un programme en C pour trouver le maximum et le minimum dans le tableau.

```bash
Entrer le nombre d'éléments à stocker dans le tableau: 3 
Entrer les 3 éléments dans le tableau: 
tab[0]: 10
tab[1]: 9 
tab[2]: 2
Le maximum est: 10 
Le minimum est: 2

```


#### 150. Écrire un programme en C pour séparer les nombres entiers pairs et impairs dans des tableaux séparés.

```bash
Entrer le nombre d'éléments à stocker dans le tableau: 4 
Entrer les 4 éléments dans le tableau: 
tab[0]: 1
tab[1]: 2 
tab[2]: 3
tab[3]: 4
Les éléments pairs sont: 2  4
Les éléments impairs sont: 1  3

```


#### 151. Écrire un programme en C pour trier les éléments d’un tableau par ordre croissant. 

```bash
Entrer le nombre d'éléments à stocker dans le tableau: 3 
Entrer les 3 éléments dans le tableau: 
tab[0]: 3
tab[1]: 1 
tab[2]: 2
Éléments du tableau triés par ordre croissant: 1 2 3

```


#### 152. Écrire un programme en C pour trier les éléments d'un tableau par ordre décroissant. 

```bash
Entrer le nombre d'éléments à stocker dans le tableau: 3 
Entrer les 3 éléments dans le tableau: 
tab[0]: 3
tab[1]: 1 
tab[2]: 2
Éléments du tableau triés par ordre décroissant: 3 2 1

```


#### 153. Ecrivez un programme en C pour insérer une valeur dans un tableau triée.

```bash
Entrer le nombre d'éléments à stocker dans le tableau: 3 
Entrer les 3 éléments dans le tableau: 
tab[0]: 2
tab[1]: 4 
tab[2]: 8
Saisir la valeur à insérer: 7
Après l'insertion, le tableau est: 2 4 7 8

```


#### 154. Ecrivez un programme en C pour insérer une valeur dans un tableau non triée à une position donnée.

```bash
Entrer le nombre d'éléments à stocker dans le tableau: 3 
Entrer les 3 éléments dans le tableau: 
tab[0]: 2
tab[1]: 4 
tab[2]: 8
Saisir la valeur à insérer: 7
Saisir la position où la valeur doit être insérée: 2
Après l'insertion, le tableau est: 2 7 4 8

```


#### 155. Écrire un programme en C pour supprimer un élément d'un tableau à une position donnée. 

```bash
Entrer le nombre d'éléments à stocker dans le tableau: 3 
Entrer les 3 éléments dans le tableau: 
tab[0]: 2
tab[1]: 4 
tab[2]: 8
Saisir la position à supprimer: 2
Après la suppression, le tableau est: 2 8

```


#### 156. Écrire un programme en C pour trouver le deuxième plus grand élément d'un tableau. 

```bash
Entrer le nombre d'éléments à stocker dans le tableau: 4 
Entrer les 4 éléments dans le tableau: 
tab[0]: 2
tab[1]: 4 
tab[2]: 8
tab[3]: 9
Le deuxième élément le plus grand du tableau est: 8

```


#### 157. Écrire un programme en C pour trouver le deuxième plus petit élément d'un tableau. 

```bash
Entrer le nombre d'éléments à stocker dans le tableau: 4 
Entrer les 4 éléments dans le tableau: 
tab[0]: 2
tab[1]: 4 
tab[2]: 8
tab[3]: 9
Le deuxième élément le plus petit du tableau est: 4

```


#### 158. Ecrivez un programme en C pour affichez une matrice de taille 3x3 en utilisant un tableau 2D.

```bash
Entrer les éléments de la matrice: 
matrice[0][0] : 1 
matrice[0][1] : 2 
matrice[0][2] : 3 
matrice[1][0] : 4 
matrice[1][1] : 5 
matrice[1][2] : 6 
matrice[2][0] : 7 
matrice[2][1] : 8 
matrice[2][2] : 9

La matrice est : 
1   2   3 
4   5   6 
7   8   9 

```


#### 159. Ecrivez un programme en C pour additionner deux matrices de même taille. 

```bash
Entrer la taille de la matrice: 2 
Entrer les éléments de la première matrice: 
matriceA[0][0] : 1 
matriceA[0][1] : 2 
matriceA[1][0] : 3 
matriceA[1][1] : 4 
Entrer les éléments de la deuxième matrice: 
matriceB[0][0] : 5
matriceB[0][1] : 6 
matriceB[1][0] : 7 
matriceB[1][1] : 8  
La première matrice est: 
1  2 
3  4 
La deuxième matrice est: 
5  6 
7  8 
La somme des deux matrices est: 
6  8 
10 12

```


#### 160. Ecrivez un programme en C pour la soustraction de deux matrices. 

```bash
Entrer la taille de la matrice: 2 
Entrer les éléments de la première matrice: 
matriceB[0][0] : 5
matriceB[0][1] : 6 
matriceB[1][0] : 7 
matriceB[1][1] : 8  
Entrer les éléments de la deuxième matrice: 
matriceA[0][0] : 1 
matriceA[0][1] : 2 
matriceA[1][0] : 3 
matriceA[1][1] : 4 
La première matrice est: 
5  6 
7  8  
La deuxième matrice est: 
1  2 
3  4
La soustraction des deux matrices est: 
4  4 
4  4

```


#### 161. Écrire un programme en C pour multiplier deux matrices carrées.

```bash
Entrer le nombre de lignes et de colonnes: 2 2
Entrer les éléments de la première matrice: 
matriceB[0][0] : 1
matriceB[0][1] : 2 
matriceB[1][0] : 1
matriceB[1][1] : 3 
Entrer les éléments de la deuxième matrice: 
matriceA[0][0] : 3 
matriceA[0][1] : 2 
matriceA[1][0] : 1 
matriceA[1][1] : 1 
La première matrice est: 
1  2 
1  3  
La deuxième matrice est: 
3  2 
1  1
La multiplication des deux matrices est: 
5  4 
6  5

```


#### 162. Écrire un programme en C pour trouver la transposée d’une matrice donnée. 

```bash
Entrer le nombre de lignes et de colonnes: 3 2
Entrer les éléments de la première matrice: 
1  2
3  4
5  6
La matrice est: 
1   2
3   4
5   6 
La transposition de la matrice est:
1   3   5
2   4   6

```


#### 163. Ecrivez un programme en C pour trouver la somme de la diagonale droite d’une matrice.

```bash
Entrer la taille de la matrice: 2
Entrer les éléments de la matrice: 
matrice[0][0] : 1
matrice[0][1] : 2 
matrice[1][0] : 3
matrice[1][1] : 4 
La matrice est: 
1  2 
3  4  
La somme des éléments de la diagonale droite est: 5

```


#### 164. Ecrivez un programme en C pour trouver la somme de la diagonale gauche d'une matrice.

```bash
Entrer la taille de la matrice: 2
Entrer les éléments de la matrice: 
matrice[0][0] : 1
matrice[0][1] : 2 
matrice[1][0] : 3
matrice[1][1] : 4 
La matrice est: 
1  2 
3  4  
La somme des éléments de la diagonale gauche est: 5

```


#### 165. Ecrivez un programme en C pour trouver la somme des lignes et des colonnes d'une matrice. 

```bash
Entrer la taille de la matrice: 2
Entrer les éléments de la matrice: 
matrice[0][0] : 1
matrice[0][1] : 2 
matrice[1][0] : 3
matrice[1][1] : 4 
La matrice est: 
1  2 
3  4  
La somme des lignes et des colonnes de la matrice est:
1  2    3
3  4    7
4  6

```


#### 166. Écrire un programme en C pour afficher le triangle supérieur d'une matrice donnée.

```bash
Entrer la taille de la matrice: 3
Entrer les éléments de la matrice: 
matrice[0][0] : 1
matrice[0][1] : 2 
matrice[0][2] : 3
matrice[1][0] : 4
matrice[1][1] : 5 
matrice[1][2] : 6
matrice[2][0] : 7
matrice[2][1] : 8 
matrice[2][2] : 9
La matrice est: 
1  2  3
4  5  6
7  8  9 
Mettre des zéros dans la matrice triangulaire inférieure:
1  2  3
0  5  6
0  0  9

```


#### 167. Écrire un programme en C pour afficher le triangle inférieure d'une matrice donnée.

```bash
Entrer la taille de la matrice: 3
Entrer les éléments de la matrice: 
matrice[0][0] : 1
matrice[0][1] : 2 
matrice[0][2] : 3
matrice[1][0] : 4
matrice[1][1] : 5 
matrice[1][2] : 6
matrice[2][0] : 7
matrice[2][1] : 8 
matrice[2][2] : 9
La matrice est: 
1  2  3
4  5  6
7  8  9 
Mettre des zéros dans la matrice triangulaire supérieur:
1  0  0
4  5  0
7  8  9 

```


#### 168. Ecrivez un programme en C pour calculer le déterminant d'une matrice 3 x 3.

```bash
Entrer les éléments de la matrice: 
matrice[0][0] : 1
matrice[0][1] : 2 
matrice[0][2] : 3
matrice[1][0] : 4
matrice[1][1] : 5 
matrice[1][2] : 6
matrice[2][0] : 7
matrice[2][1] : 8 
matrice[2][2] : 9
La matrice est: 
1  2  3
4  5  6
7  8  9 
Le déterminant de la matrice est : 0 

```


#### 169. Écrire un programme en C pour accepter une matrice et déterminer s'il s'agit d'une matrice creuse.

```bash
|0 0|
|1 0|
Entrer le nombre de lignes de la matrice: 2 
Entrer le nombre de colonnes de la matrice: 2 
Entrer les éléments de la matrice: 
matrice[0][0] : 0
matrice[0][1] : 0
matrice[1][0] : 1
matrice[1][1] : 0 
La matrice donnée est une matrice creuse.
Il y a 3 nombres de zéros dans la matrice.

```


#### 170. Ecrivez un programme en C pour accepter deux matrices et vérifier si elles sont égales. 

```bash
Entrer le nombre de lignes et colonnes de la 1ère matrice: 2 2 
Entrer le nombre de lignes et colonnes de la 2ème matrice: 2 2 
Entrer les éléments de la première matrice: 
matriceA[0][0] : 1 
matriceA[0][1] : 2 
matriceA[1][0] : 3 
matriceA[1][1] : 4 
Entrer les éléments de la deuxième matrice: 
matriceB[0][0] : 1
matriceB[0][1] : 2 
matriceB[1][0] : 3 
matriceB[1][1] : 4  
La première matrice est: 
1  2 
3  4 
La deuxième matrice est: 
1  2 
3  4 
Les matrices peuvent être comparées.
Les deux matrices sont égales.

```


#### 171. Écrire un programme en C pour vérifier si une matrice donnée est une matrice d’identité. 

```bash
Entrer le nombre de lignes de la matrice: 2 
Entrer le nombre de colonnes de la matrice: 2 
Entrer les éléments de la matrice: 
matrice[0][0] : 1
matrice[0][1] : 0 
matrice[0][2] : 0
matrice[1][0] : 0
matrice[1][1] : 1 
matrice[1][2] : 0
matrice[2][0] : 0
matrice[2][1] : 0 
matrice[2][2] : 1
La matrice est: 
1  0  0
0  1  0
0  0  1 
La matrice est une matrice d'identité.

```


#### 172. Ecrivez un programme en C pour trouver une paire avec une somme donnée dans le tableau. 

```bash
Le tableau donné: 4 5 2 9 7 6 
La somme donnée: 6
Une paire d'éléments peut faire la somme donnée par la valeur des indices 0 et 2.

```


#### 173. Ecrivez un programme en C pour trouver l'élément apparaissant un nombre impair de fois dans le tableau.

```bash
Le tableau donné est: 1 2 1 6 6 2 7 2 7
L'élément apparaissant un nombre impair de fois est: 2 

```


#### 174. Ecrivez un programme en C pour trouver le nombre manquant dans un tableau donné. Il n'y a pas de doublons. 

```bash
Le tableau donné est: 1 5 4 2 3 9 8 7
Le nombre manquant est: 6

```


#### 175. Écrire un programme en C pour trouver le plus petit élément manquant dans un tableau trié.

```bash
Le tableau donné est: 0 1 2 4 5 6 7 9 
Le plus petit élément manquant est: 3

```


#### 176. Écrire un programme en C pour trouver deux éléments dont la somme est la plus proche de zéro. 

```bash
Le tableau donné est: 55 42 75 -52 -89 23 80 -99 2 -44 
La paire d'éléments dont la somme est minimale est: [42, -44]

```


#### 177. Écrire un programme en C pour trouver le plus petit nombre positif manquant dans un tableau non trié.

```bash
Le tableau donné est: 3 1 2 -5 5 -23 10 6 8 -7 
Le plus petit nombre positif manquant est: 4

```


#### 178. Écrire un programme en C pour trouver l'élément majoritaire dans un tableau.

```bash
Le tableau donné est: 4 1 2 4 4 5 4 6 8 4 
L'élément majoritaire est: 4

```


#### 179. Ecrivez un programme en C pour trier un tableau de 0, 1 et 2. 

```bash
Le tableau donné est: 0 1 1 2 2 1 0 1 2 0 2 0 
Après le tri, les éléments du tableau sont: 0 0 0 0 1 1 1 1 2 2 2 2

```


#### 180. Écrire un programme en C pour vérifier si un tableau est un sous-ensemble d'un autre tableau. 

```bash
Le premier tableau donné est: 3 8 7 12 6 9 1 0 5 
Le deuxième tableau est: 1 3 7 6 0
Le deuxième tableau est un sous-ensemble du premier tableau.

```


#### 181. Ecrivez un programme en C pour trouver la ligne avec le plus grand nombre de 1. 

```bash
Le tableau 2D donné est : 
0 0 1 1 
0 0 1 1 
1 1 1 1
0 0 0 0 
L'index de la ligne avec le maximum de 1 est: 2

```


#### 182. Écrire un programme en C pour afficher tous les éléments uniques dans un tableau non trié. 

```bash
Le tableau donné est: 2 1 7 3 7 3 2 4 2 6 2 
Les éléments uniques du tableau donné sont: 2 1 7 3 4 6

```


#### 183. Ecrivez un programme en C pour trouver la somme des éléments du triangle supérieur d'une matrice.

```bash
Le tableau donné est : 
1 2 3 
4 5 6 
7 8 9 
Les éléments à additionner de la matrice triangulaire supérieure sont: 2 3 6 
La somme des éléments de la matrice triangulaire supérieure est: 11

```


#### 184. Ecrivez un programme en C pour trouver la somme des éléments du triangle inférieurs d'une matrice.

```bash
Le tableau donné est : 
1 2 3 
4 5 6 
7 8 9 
Les éléments à additionner de la matrice triangulaire inférieur sont: 4 7 8
La somme des éléments de la matrice triangulaire inférieur est: 19

```


#### 185. Écrire un programme en C pour générer des permutations aléatoires dans un tableau. 

```bash
Le tableau donné est:
0 1 2 3 4 5 6 7 8 9
Les éléments du tableau sont mélangés:
8 4 0 2 9 5 7 1 3 6

```


#### 186. Ecrivez un programme en C pour trouver le nombre qui se répète le plus dans un tableau donné.

```bash
Le tableau donné est:
0 1 2 3 4 5 5 5 5 5
Le nombre qui se répète le plus est 5

```


#### 187. Ecrivez un programme en C pour trouver une paire avec la différence donnée. 

```bash
Le tableau donné est :
1 8 2 3 4 
La différence donnée est: 4
La paire est: (4, 8)

```


#### 188. Ecrivez un programme en C pour séparer les 0 et les 1 dans un tableau. 

```bash
Le tableau donné est :
0 1 0 1 1 0
Le tableau après séparation est: 0 0 0 1 1 1

```


#### 189. Écrire un programme en C pour séparer les éléments pairs et impairs dans un tableau.

```bash
Le tableau donné est :
3 4 5 2 1 6 8
Le tableau après séparation est: 2 4 6 8 1 3 5

```


#### 190. Écrire un programme en C pour concaténer deux tableaux d'entiers donnés. 

```bash
([1, 2, 3, 4, 5],[6, 7, 8, 9, 10]) -> [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]"

```


#### 191. Écrire un programme en C permettant de saisir 10 nombres et de les stocker dans un tableau appelé myTab, puis de les afficher. 

```bash
Entrer un nombre: 6   
Entrer un nombre: 3   
Entrer un nombre: 8   
Entrer un nombre: 1   
Entrer un nombre: 5  
Entrer un nombre: 9  
Entrer un nombre: 4  
Entrer un nombre: 2  
Entrer un nombre: 6  
Entrer un nombre: 0
6   3   8   1   5   9   4   2   6   0

```


#### 192. Écrire un programme en C permettant d'entrer 10 notes et d'afficher la moyenne de ces notes.

```bash
Entrer un nombre: 6  
Entrer un nombre: 3  
Entrer un nombre: 8  
Entrer un nombre: 1  
Entrer un nombre: 5  
Entrer un nombre: 9  
Entrer un nombre: 4  
Entrer un nombre: 2  
Entrer un nombre: 6  
Entrer un nombre: 0
La moyenne est: 4,4

```


#### 193. Écrire un programme en C permettant la saisi de 10 nombres et l'affichage du maximum de ces nombres.

```bash
Entrer un nombre: 6   
Entrer un nombre: 3   
Entrer un nombre: 8   
Entrer un nombre: 1   
Entrer un nombre: 5   
Entrer un nombre: 7   
Entrer un nombre: 4   
Entrer un nombre: 2   
Entrer un nombre: 6   
Entrer un nombre: 0
Le maximum est: 8

```


#### 194. Ecrivez un programme en C qui permet d'entrer 10 nombres dans un tableau, et de calculer le nombre d'occurrences d'un élément X dans ce tableau. Où X est entré par l'utilisateur.

```bash
Entrer un nombre: 6   
Entrer un nombre: 3   
Entrer un nombre: 8   
Entrer un nombre: 6   
Entrer un nombre: 5   
Entrer un nombre: 7   
Entrer un nombre: 4   
Entrer un nombre: 6   
Entrer un nombre: 6   
Entrer un nombre: 0
Entrer Le nombre recherché: 6
Nombre d'occurences de 6 est 4

```


#### 195. Ecrivez un programme en C pour entrer 10 entiers dans un tableau et trier ce tableau dans un ordre croissant. Affichez ensuite ce tableau après l'avoir trié.

```bash
Entrer un nombre: 8   
Entrer un nombre: 1  
Entrer un nombre: 5  
Entrer un nombre: 6   
Entrer un nombre: 3  
Entrer un nombre: 2   
Entrer un nombre: 4   
Entrer un nombre: 7   
Entrer un nombre: 9   
Entrer un nombre: 0
Tableau trié: 0    1    2    3    4    5    6    7    8    9

```


#### 196. Ecrivez un programme en C qui permet de saisir 5 nombres dans un tableau. Comptez ensuite le nombre d'éléments pairs et impairs.

```bash
Entrer un nombre: 1
Entrer un nombre: 3
Entrer un nombre: 2
Entrer un nombre: 6
Entrer un nombre: 9

Total des éléments pairs: 2 
Total des éléments impaires: 3

```


#### 197. Ecrivez un programme en C qui demande d'entrer un tableau Tab de 10 nombres, et de placer les éléments pairs dans un tableau Tab1 et les éléments impairs dans un tableau Tab2. Affichez ensuite Tab1 et Tab2.

```bash
Tab : 1 5 2 4 9 3 3 6 8 7   
Tab1: 2 4 6 8     
Tab2: 1 5 9 3 3 7

```


#### 198. Écrire un programme en C qui lit un caractère et détermine si c'est une lettre ou non, dans le cas d'une lettre, il indique si c'est une minuscule ou une majuscule.

```bash
Donnez une lettre: a
C'est une lettre Minuscule

Donnez une lettre: A
C'est une lettre Majuscule

Donnez une lettre: 5
C'est pas une lettre!

```


#### 199. Écrire un programme en C qui compte le nombre d'éléments dupliqués dans un tableau de nombres entiers saisi par l'utilisateur.

```bash
Entrer un nombre: 5   
Entrer un nombre: 1  
Entrer un nombre: 5  
Entrer un nombre: 6   
Entrer un nombre: 3  
Entrer un nombre: 5   
Entrer un nombre: 4   
Entrer un nombre: 7   
Entrer un nombre: 9   
Entrer un nombre: 5
Nombre total d'éléments dupliqués est: 4

```


#### 200. Écrire un programme en C qui permet d'entrer 10 nombres entiers et de savoir si ces nombres entiers sont successifs ou non.

```bash
0 1 3 4 5 6 7 8 9 
Les nombres ne sont pas successives

11 12 13
Les nombres sont successives

```


#### 201. Écrire un programme en C qui place les zéro vers la fin du tableau, en maintenant l'ordre des éléments.

```bash
Entrée: 8 0 6 0 1 6 0 0 2 3
Sortie: 8 6 1 6 2 3 0 0 0 0

```

