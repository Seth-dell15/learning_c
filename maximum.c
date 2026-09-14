//
// Created by hugoc on 13/09/2026.
//
#include <stdio.h>
#include <stdbool.h>

int tableau[5] = {25, 50, 63, 2, 28};
int maximum = 0;
int i = 0;

int main(void) {
    while (true) {
        if (tableau[i] > maximum) {
            maximum = tableau[i];
            i++;
            printf("The maximum number is %d\n", maximum);
        }
        else if (i >= 5) {
            break;
        }
        else {
            i++;
        }
    }
}