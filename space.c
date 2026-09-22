//
// Created by hugoc on 22/09/2026.
//
#include <stdio.h>

int main () {
    int c, dernier_c;

    while ((c = getchar()) != EOF) {
        if (!(c == ' ' && dernier_c == ' ')) // ! agit comme la porte not
            putchar(c);

        dernier_c = c;
    }
}