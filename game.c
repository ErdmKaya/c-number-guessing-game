#include <stdio.h>
#include <stdlib.h> 
#include <time.h>   

int main() {
    int unknownNumber, guess, attempts = 0;

    srand(time(NULL));

    unknownNumber = (rand() % 100) + 1;

    printf("=======================================\n");
    printf("WELCOME TO THE NUMBER GUESSING GAME \n");
    printf("I have picked a number between 1 and 100.\n");
    printf("=======================================\n\n");

    do {
        printf("What is your guess?: ");
        scanf("%d", &guess);
        attempts++; 

        if (guess > unknownNumber) {
            printf("Enter a smaller number.\n\n");
        } 
        else if (guess < unknownNumber) {
            printf("Enter a larger number.\n\n");
        } 
        else {
            printf("\nCongratulations! You found the number %d in %d attempts!\n", unknownNumber, attempts);
        }

    } while (guess != unknownNumber); 

    return 0;
}