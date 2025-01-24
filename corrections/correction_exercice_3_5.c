/*

- Modifiez l'exercice précédent en utilisant pthread_exit pour terminer chaque thread proprement. 
#
*/


#include <stdio.h>
#include <pthread.h>

void* printBonjour(void* arg) {
    for (int i = 0; i < 50; i++) {
        printf("Bonjour\n");
    }
    pthread_exit(NULL);
}

void* printAurevoir(void* arg) {
    for (int i = 0; i < 50; i++) {
        printf("Au revoir\n");
    }
    pthread_exit(NULL);
}

int main() {
    pthread_t thread1, thread2;
    
    pthread_create(&thread1, NULL, printBonjour, NULL);
    pthread_create(&thread2, NULL, printAurevoir, NULL);
    
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    
    return 0;
}