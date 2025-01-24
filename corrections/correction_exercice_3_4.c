/*

- Créer un programme qui affiche alternativement "Bonjour" et "Au revoir" 50 fois chacun.
- Utilisez un mutex pour synchroniser les threads.

*/

#include <stdio.h>
#include <pthread.h>
#include <stdbool.h>

// Déclaration du mutex et de la variable partagée
pthread_mutex_t mutex;
bool isBonjourTurn = true;

void* printBonjour(void* arg) {
    for (int i = 0; i < 50; i++) {
        pthread_mutex_lock(&mutex);
        while (!isBonjourTurn) { // Attendre que ce soit le tour de "Bonjour"
            pthread_mutex_unlock(&mutex);
            pthread_mutex_lock(&mutex);
        }
        printf("Bonjour\n");
        isBonjourTurn = false; // Passer le tour à l'autre thread
        pthread_mutex_unlock(&mutex);
    }
    return NULL;
}

void* printAurevoir(void* arg) {
    for (int i = 0; i < 50; i++) {
        pthread_mutex_lock(&mutex);
        while (isBonjourTurn) { // Attendre que ce soit le tour de "Au revoir"
            pthread_mutex_unlock(&mutex);
            pthread_mutex_lock(&mutex);
        }
        printf("Au revoir\n");
        isBonjourTurn = true; // Passer le tour à l'autre thread
        pthread_mutex_unlock(&mutex);
    }
    return NULL;
}

int main() {
    pthread_t thread1, thread2;

    // Initialiser le mutex
    pthread_mutex_init(&mutex, NULL);

    // Création des threads
    pthread_create(&thread1, NULL, printBonjour, NULL);
    pthread_create(&thread2, NULL, printAurevoir, NULL);

    // Attendre que les deux threads aient fini leur exécution
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    // Détruire le mutex après utilisation
    pthread_mutex_destroy(&mutex);

    return 0;
}
