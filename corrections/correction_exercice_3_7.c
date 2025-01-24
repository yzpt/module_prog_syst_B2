/*

- Créez un programme avec deux threads : le premier thread incremente une variable partagée toutes les 100ms, et le second thread affiche cette variable à chaque changement. 
- Utilisez un mutex pour protéger l'accès à la variable partagée.

*/

#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

int sharedVar = 0;
pthread_mutex_t mutex;

// Fonction qui incrémente la variable partagée toutes les 100ms
void* increment(void* arg) {
    while (1) {
        pthread_mutex_lock(&mutex);
        sharedVar++;  // Incrémentation de la variable partagée
        pthread_mutex_unlock(&mutex);
        usleep(100000);  // Attente de 100ms
    }
    return NULL;
}

// Fonction qui affiche la variable partagée à chaque changement
void* printVar(void* arg) {
    int lastPrinted = -1;  // Dernière valeur imprimée
    while (1) {
        pthread_mutex_lock(&mutex);
        if (sharedVar != lastPrinted) {  // Si la variable a changé, on l'affiche
            printf("Variable partagée : %d\n", sharedVar);
            lastPrinted = sharedVar;  // Met à jour la dernière valeur imprimée
        }
        pthread_mutex_unlock(&mutex);
        usleep(100000);  // Attente de 100ms
    }
    return NULL;
}

int main() {
    pthread_t thread1, thread2;
    
    // Initialisation du mutex
    pthread_mutex_init(&mutex, NULL);
    
    // Création des threads
    pthread_create(&thread1, NULL, increment, NULL);
    pthread_create(&thread2, NULL, printVar, NULL);
    
    // Attente de la fin des threads (qui ne se termine pas dans ce cas précis)
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    
    // Destruction du mutex après utilisation
    pthread_mutex_destroy(&mutex);
    
    return 0;
}
