#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main(){
    const int MIN = 1;
    const int MAX = 100;

    int guess, guesses, answer;

    // Generating the seed and answer
    srand(time(0));
    answer = (rand() % MAX) + MIN;

    // Beginning message
    for(int i = 0; i < 19; i++){
        printf("*");
    }
    printf("\nNumber guessing game\n");
    for(int i = 0; i < 19; i++){
        printf("*");
    }
    
    while(guess != answer){
        printf("\nEnter a guess: ");
        scanf("%d", &guess);
        if(guess > answer){
            printf("Try a little lower...");
        }
        else if(guess < answer){
            printf("Try a little higher...");
        }
        else{
            printf("Correct! You guessed it!");
        }
        guesses++;
    }

    printf("\nThe answer was %d, you guessed in %d tries\n", answer, guesses);
    printf("\nPress any key to exit");

    while(1){
        if(kbhit()) break;
    }
    
    return 0;
}