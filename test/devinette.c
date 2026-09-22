//
// Created by hugoc on 13/09/2026.
//
#include <stdio.h>

int number = 42;
int userInput;
int counter = 0;

int main(void) {
    while (userInput != number) {
        printf("Enter a number: \n");
        scanf("%d", &userInput);

        if (userInput == number) {
            printf("The number is equal to %d\n", number);
            printf("You won in %d times.\n", counter);
            break;
        }
        else if (userInput > number) {
            printf("The number is less than %d\n", userInput);

        }
        else {
            printf("The number is greater than %d\n", userInput);
        }
        counter++;
    }
}