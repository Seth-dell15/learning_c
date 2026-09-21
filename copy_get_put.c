//
// Created by hugoc on 21/09/2026.
//
#include <stdio.h>

int main() {
    int c;

    /*c = getchar();
    while (c != EOF) {//end of file
        putchar(c);
        c = getchar();
    }*/

    printf("Valeur de EOF : %d\n\n", EOF);

    while ((c = getchar()) != EOF)
        //putchar(c);
        printf("Expression (c != EOF) -> %d\n", c != EOF);


}