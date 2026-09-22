//
// Created by hugoc on 22/09/2026.
//
#include <stdio.h>

//Autre manière de compter les caractères avec une boucle for et en utilisant un double
int main() {
    double nc;

    for (nc = 0;getchar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc);
}