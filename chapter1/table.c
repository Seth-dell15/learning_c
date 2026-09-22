//
// Created by hugoc on 22/09/2026.
//
#include <stdio.h>

// Compte les chiffres, les caractères d'espacement et les autres caractères en entrée
int main() {
    int c, i, nespace, nautre;
    int nchiffre[10];

    nespace = nautre = 0;
    for (i =0; i<10; ++i)
        nchiffre[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            ++nchiffre[c-'0'];
        }
        else if (c == ' ' || c == '\n' || c == '\t' ) {
            ++nespace;
        }
        else
            ++nautre;
    }
    printf("chiffres =");
    for (i=0; i<10; ++i)
        printf(" %d", nchiffre[i]);
    printf(", espacement = %d, autres = %d\n", nespace, nautre);
}