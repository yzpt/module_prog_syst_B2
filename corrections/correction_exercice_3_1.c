/*

- Écrivez un programme en C qui crée deux threads exécutant une même fonction. 
- La première fonction imprimera "Bonjour" et la seconde imprimera "Au revoir". 
- Chaque fonction doit être exécutée 100 fois dans une boucle respective, et les deux threads doivent être lancés simultanément.

#
*/



#include <stdio.h>
#include <pthread.h>

void* printBonjour(void* arg) {
    for (int i = 0; i < 100; i++) {
        printf("Bonjour\n");
    }
    return NULL;
}

void* printAurevoir(void* arg) {
    for (int i = 0; i < 100; i++) {
        printf("Au revoir\n");
    }
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
