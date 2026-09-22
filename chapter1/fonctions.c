//
// Created by hugoc on 22/09/2026.
//
#include <stdio.h>

int puiss(int m, int n);

//essaie de la fonction puiss
int main () {
    int i;

    for (i = 0; i < 10; ++i) {
        printf("%d %d %d\n",i, puiss(2,i), puiss(-3,i));
    }
    return 0;
}

// puiss : élève base à la puissance n ; n >= 0
int puiss(int base, int n) {
    int i, p;

    p = 1;
    for (i = 1; i <= n; ++i) {
        p = p * base;
    }
    return p;
}