#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    const int MIN = 1;
    const int MAX = 100;

    int guess, guesses, answer;

    // Generating the seed and answer
    srand(time(0));
    answer = (rand() % MAX) + MIN;

    // Beginning message
    for(int i = 0; i < 12; i++){
        printf("*");
    }
    printf("\nNumber guessing game\n");
    for(int i = 0; i < 12; i++){
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

    printf("\nThe answer was %d, you guessed in %d tries", answer, guesses);
    
    return 0;
}