//
// Created by hugoc on 13/09/2026.
//
#include <stdio.h>

char tableau[] = "Problem";

int main(void) {
    for (int i = 0; i <= 10; i++) {
        for (int j = 10; j >= 0; j--) {
            printf("%c", tableau[j - 1]);
        }
    }
    return 0;
}

/*
#include <stdio.h>
#include <string.h> // Nécessaire pour strlen

char tableau[] = "Problem";

int main(void) {
    int longueur = strlen(tableau); // Récupère la taille (7)

    // On part du dernier caractère (longueur - 1) jusqu'au premier (0)
    for (int j = longueur - 1; j >= 0; j--) {
        printf("%c", tableau[j]);
    }

    printf("\n"); // Pour sauter une ligne à la fin

    return 0;
}
*/
