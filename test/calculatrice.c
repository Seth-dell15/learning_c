//
// Created by hugoc on 13/09/2026.
//
#include <stdio.h>
int userInput1;
int userInput2;

int userInput3;

int main(void) {
    printf("Veuillez choisir une option:\n");
    printf("1.Addition\n");
    printf("2.Soustraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");

    scanf("%d", &userInput3);

    printf("Veuillez maintenant choisir deux nombres à calculer: \n");
    scanf("%d", &userInput1);
    scanf("%d", &userInput2);

    switch (userInput3) {
        case 1:
            int sum = userInput1 + userInput2;
            printf("Sum = %d\n", sum);
            break;
        case 2:
            int soustraction = userInput1 - userInput2;
            printf("Soustraction = %d\n", soustraction);
            break;
        case 3:
            int multiplication = userInput1 * userInput2;
            printf("Multiplication = %d\n", multiplication);
            break;
        case 4:
            if (userInput1 || userInput2 == 0) {
                printf("Veuillez effectuer une division valide!");
            };
            int division = userInput1 / userInput2;
            printf("Division = %d\n", division);
            break;
    }

    return 0;
}