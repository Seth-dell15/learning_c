//
// Created by hugoc on 22/09/2026.
//
#include <stdio.h>

#define MAX_LENGTH 15

// affiche un histogramme des longeurs des mots reçu en entrée
int main() {
    int c, i, j;
    int longueur_courante = 0;
    int longueurs[MAX_LENGTH + 1];

    for (i = 0; i <= MAX_LENGTH; ++i) {
        longueurs[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (longueur_courante > 0) {
                if (longueur_courante <= MAX_LENGTH) {
                    ++longueurs[longueur_courante];
                } else {
                    ++longueurs[MAX_LENGTH];
                }
                longueur_courante = 0;
            }
        }
        else {
            ++longueur_courante;
        }
    }
    if (longueur_courante > 0) {
        if (longueur_courante <= MAX_LENGTH) {
            ++longueurs[longueur_courante];
        }else {
            ++longueurs[MAX_LENGTH];
        }
    }

    printf("Histogramme : \n");
    for (i = 1; i <= MAX_LENGTH; ++i) {
        if (i == MAX_LENGTH) {
            printf("%2d+ lettres : ", MAX_LENGTH);
        }else {
            printf("%2d lettres : ", i);
        }

        for (j = 0; j <= longueurs[i]; ++j) {
            putchar('*');
        }
        putchar('\n');
    }
}