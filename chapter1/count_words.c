//
// Created by hugoc on 22/09/2026.
//
#include <stdio.h>

#define DEDANS 1 // à l'intérieur d'un mot
#define DEHORS 0 // à l'extérieur d'un mot

int main() {
    int c, nl, nm, nc, etat;

    etat = DEHORS;
    nl = nm = nc = 0;

    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n') {
            ++nl;
        }
        if (c == ' ' || c == '\n' || c == '\t') {
            etat = DEHORS;
        }
        else if (etat == DEHORS) {
            etat = DEDANS;
            ++nm;
        }
    }
    printf("%d %d %d\n", nl, nm, nc);
}