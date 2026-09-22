//
// Created by hugoc on 22/09/2026.
//

#include <stdio.h>

#define DEDANS 1 // à l'intérieur d'un mot
#define DEHORS 0 // à l'extérieur d'un mot

int main() {
    int c, etat;

    etat = DEHORS;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (etat == DEDANS) {
                putchar('\n');
                etat = DEHORS;
            }
        }
        else {
            putchar(c);
            etat = DEDANS;
        }
    }
}