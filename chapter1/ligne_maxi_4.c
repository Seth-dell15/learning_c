//
// Created by hugoc on 23/09/2026.
//
#include <stdio.h>

#define MAXLIGNE 1000


int lireligne(char ligne[], int maxligne);
int nettoyer_ligne(char s[]);

// affiche la plus longue ligne en entrée
int main() {
    int l, longueur; // longeur ligne courante
    char ligne[MAXLIGNE]; // ligne entrée courant

    while ((l = lireligne(ligne, MAXLIGNE)) > 0) {
        longueur = nettoyer_ligne(ligne);
        if (l > 0) {
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

int nettoyer_ligne(char s[]) {
    int i = 0;

    //parcourt chaque caractère du tableau
    while (s[i] != '\0') {
        ++i;
    }
    --i; //on a parcouru le tableau mais on ne veut pas un buffer overflow à cause de l'oubli de '\0'

    int nespace = 0;
    if (i >= 0 && s[i] == '\n') {
        nespace = 1;
        --i;
    }

    while (i > 0 && (s[i] == ' ' || s[i] == '\t')) {
        --i;
    }

    if (i >= 0) {
        if (nespace) {
            s[++i] = '\n';
        }
        s[++i] = '\0';
    } else {
        s[0] = '\0';
        i = 0;
    }
    return i;
}

