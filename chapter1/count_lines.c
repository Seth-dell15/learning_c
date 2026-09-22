//
// Created by hugoc on 22/09/2026.
//
#include <stdio.h>

int main () {
    int c, nl, ns, tab;

    nl = 0; //nombre de fin de ligne
    tab = 0; //nombre de tabulation
    ns = 0; //nombre d'espace

    while ((c = getchar()) != EOF)
        if (c == '\n')//si retour à la ligne
            ++nl;// alors nombre de ligne +1
        else if (c == '\t')
            ++tab;
        else if (c == ' ')
            ++ns;
    printf("%d\n", nl);

}