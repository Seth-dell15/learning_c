//
// Created by hugoc on 21/09/2026.
//
#include <stdio.h>

int main() {
    long nc;

    nc = 0;
    while (getchar() != EOF)
        nc++;
    printf("%ld\n", nc);

}