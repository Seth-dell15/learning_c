//
// Created by hugoc on 22/09/2026.
//
#include <stdio.h>

#define ASCII 128

// affiche un histogramme des longeurs des mots reçu en entrée
int main() {
    int c, i, j;
    int frequences[ASCII];

    for (i = 0; i < ASCII; ++i) {
        frequences[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c >= 0 || c < ASCII) {
            ++frequences[c];
        }
    }

    printf("Histogramme : \n");

    for (i = 0; i < ASCII; ++i) {
        if (i == ' ') {
            printf("' [espace]' : ");
        }
        else if (i == '\n') {
            printf("' \\n  ': ");
        }
        else if (i == '\t') {
            printf("' \\t  ': ");
        }
        else if (i == i >= 32 && i <= 126 ) {
            printf(" '%c'  : ",i);
        }
        else {
            printf(" 0x%02X : ", i);
        }

        for (j = 0; j < frequences[i]; ++j) {
            putchar('*');
        }
        printf(" (%d)\n",frequences[i]);
    }
}