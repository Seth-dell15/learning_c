//
// Created by hugoc on 23/09/2026.
//
#include <stdio.h>

#define MAXLIGNE 1000
#define SEUIL 80

int lireligne(char ligne[], int maxligne);

// affiche la plus longue ligne en entrée
int main() {
    int l; // longeur ligne courante
    char ligne[MAXLIGNE]; // ligne entrée courante

    while ((l = lireligne(ligne, MAXLIGNE)) > 0) {
        if (l > SEUIL) {
            printf("%s", ligne);
        }
    }
    return 0;
}

//lireligne lit une ligne dans s et retourne sa longeur
int lireligne(char s[], int lim) {
    int c, i;

    for (i=0; i<lim-1 && (c=getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';

    return i;
}
