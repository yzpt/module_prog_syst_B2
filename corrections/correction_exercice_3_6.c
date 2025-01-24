/*

- Créez un programme qui demande à l'utilisateur combien de threads il souhaite créer. 
- Ensuite, créez ce nombre de threads qui exécutent la même fonction, mais qui affichent leur identifiant unique à chaque itération de la boucle. 
- Chaque thread devra afficher son identifiant 5 fois.

#
*/



#include <stdio.h>
#include <pthread.h>

void* printID(void* arg) {
    int id = *((int*)arg);
    for (int i = 0; i < 5; i++) {
        printf("Thread ID: %d\n", id);
    }
    return NULL;
}

int main() {
    int n;
    printf("Combien de threads voulez-vous créer ? ");
    scanf("%d", &n);
    
    pthread_t threads[n];
    int ids[n];
    
    for (int i = 0; i < n; i++) {
        ids[i] = i;
        pthread_create(&threads[i], NULL, printID, &ids[i]);
    }
    
    for (int i = 0; i < n; i++) {
        pthread_join(threads[i], NULL);
    }
    
    return 0;
}

