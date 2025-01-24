/*

- Modifiez le programme pour que les threads partagent une variable globale qui compte le nombre de fois que chaque message a été imprimé. 
- Affichez ces valeurs à la fin de l'exécution des deux threads.

#
*/




#include <stdio.h>
#include <pthread.h>

int count = 0;

void* printBonjour(void* arg) {
    for (int i = 0; i < 50; i++) {
        printf("Bonjour\n");
        count++;
    }
    return NULL;
}

void* printAurevoir(void* arg) {
    for (int i = 0; i < 50; i++) {
        printf("Au revoir\n");
        count++;
    }
    return NULL;
}

int main() {
    pthread_t thread1, thread2;
    
    
    pthread_create(&thread1, NULL, printBonjour, NULL);
    pthread_create(&thread2, NULL, printAurevoir, NULL);
    
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    
    printf("count: %d\n", count);
    
    
    return 0;
}