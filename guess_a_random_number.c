#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number;
    srand(time(0));
    number = rand() % 10 + 1;
    int guess, nguess=1;
    printf("Please guess a number between 1 and 10\n");
    do
    {

        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Smaller number please\n");
        }
        if (guess < number)
        {
            printf("Bigger number please\n");
        }
        if (guess == number)
        {
            printf("Congrats you guessed a right number in %d attemps \n",nguess);
        }
        nguess++;

    } while (guess != number);
}
