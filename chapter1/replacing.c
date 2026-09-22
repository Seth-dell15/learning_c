//
// Created by hugoc on 22/09/2026.
//
#include <stdio.h>

int main() {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') { // si tabulation alors j'écrit \t
            putchar('\\');
            putchar('t');
        }
        else if (c == '\b') { // si backspace alors j'écrit \b
            putchar('\\');
            putchar('b');
        }
        else if (c == '\\') { /*si backslash alors j'écrit \\ */
            putchar('\\');
            putchar('\\');
        }
        else {
            putchar(c);
        }
    }
}