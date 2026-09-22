//
// Created by hugoc on 21/09/2026.
//
#include <stdio.h>

int main()
{
    int fahr;

    //Croissant
    for (fahr = 0; fahr <= 300; fahr = fahr + 20) {
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
    }

    printf("\n");

    //Décroissant
    for (fahr = 300; fahr >= 0; fahr = fahr - 20) {
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
    }
}