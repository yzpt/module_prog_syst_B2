/*

- Modifiez le programme de l'exercice précédent en utilisant pthread_create pour créer les threads et pthread_join pour attendre que les threads aient terminé leur exécution avant que le programme principal ne se termine. 
- Affichez un message lorsque chaque thread se termine.

#
*/

#include <stdio.h>
#include <pthread.h>


void* printBonjour(void* arg) {
    for (int i = 0; i < 50; i++) {
        printf("Bonjour\n");
    }
    printf("Thread printBonjour terminé\n");
    return NULL;
}

void* printAurevoir(void* arg) {
    for (int i = 0; i < 50; i++) {
        printf("Au revoir\n");
    }
    printf("Thread printAurevoir terminé\n");
    return NULL;
}

int main() {
    pthread_t thread1, thread2;
    
    
    pthread_create(&thread1, NULL, printBonjour, NULL);
    pthread_create(&thread2, NULL, printAurevoir, NULL);
    
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    
    
    return 0;
}
