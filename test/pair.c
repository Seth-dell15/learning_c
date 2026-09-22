//
// Created by hugoc on 13/09/2026.
//

#include <stdio.h>

int main(void) {
    int userInput;
    printf("Inserer un numero: ");
    scanf("%d", &userInput);

    (userInput % 2 == 0) ? printf("Votre nombre est pair"): printf("Votre nombre est impair");

    return 0;
}