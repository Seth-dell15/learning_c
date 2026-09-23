//
// Created by hugoc on 23/09/2026.
//
#include <stdio.h>

#define MAXLIGNE 1000

int lireligne(char ligne[], int maxligne);
void copier(char vers[], char de[]);

// affiche la plus longue ligne en entrée
int main() {
    int l; // longeur ligne courante
    int max; // longeur ligne max rencontré
    char ligne[MAXLIGNE]; // ligne entrée courante
    char pluslongue[MAXLIGNE]; // sauvegarde la ligne la plus longue

    max = 0;
    while ((l = lireligne(ligne, MAXLIGNE)) > 0) {
        if (l > max) {
            max = l;
            copier(pluslongue, ligne);
        }
    }
    if (max > 0) { // il y avait une ligne
        printf("%s", pluslongue);
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

//copier copie 'de' dans 'vers' et suppose que 'vers' est assez long
void copier(char vers[], char de[]) {
    int i;

    i = 0;
    while ((vers[i] = de[i]) != '\0') {
        ++i;
    }
}