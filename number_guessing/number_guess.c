#include "stdio.h"
#include "time.h"
#include "stdlib.h"
#include "math.h"

/* Function that generate a number in
 * the range[1, N] and checks if the
 * generated numbers is the same as
 * the guessed number or not 
*/
void guess(int N)
{
    int number, guess, numberofguess = 0;
    
    /* Seed random number generator*/
    srand(time(NULL));

    /* Generate a random number */
    number = rand() % N;

    printf("Guess the number between 1 and %d\n", N);

    /* Using do-while loop that
     * will work until user guesses
     * the correct number
     */
    do{
        if (numberofguess > 9) {
            printf("\nYou Lose!\n");
            break;
        }

        /* Input by the user */
        scanf("%d", &guess);

        /* When the user guesses lower
         * than actual number
         */
        if (guess > number)
        {
            printf("Lower number "
                    "please!\n");
            numberofguess++;
        }

        /* When the user guesses higher
         * than actual number
         */
        else if (number > guess) {
            printf("Higher number "
                    "please!\n");
            numberofguess++;
        }
        
        /* Printing number of times
         * user has taken to guess
         * the number
         */
        else
            printf("You guessed the"
                    " number in %d "
                    " attempts\n", numberofguess);
        } while (guess != numberofguess);
}

/* Driver code */
int main()
{
  int N = 100;

  /* Function call */
  guess(N);
}
