//
// Created by hugoc on 22/09/2026.
//
#include <stdio.h>

#define MINI 0 //borne inférieur de la table
#define MAXI 300 //borne supérieur de la table
#define INTER 20 //intervalle entre les valeurs en degrés Fahrenheit

float conversion(float degre);

int main()
{
    float celsius;

    for (celsius = MINI; celsius <= MAXI; celsius = celsius + INTER) {
        printf("%7.1f %10.1f\n", celsius, conversion(celsius));
    }
    return 0;
}

float conversion(float degre) {
    return (degre * (9.0/5.0)) + 32.0;
}