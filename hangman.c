#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int getLength(char str[]);
char askLetter();
void createCorrectWord(int length, int *correctWord);
int tryLetter(char letter, int length, char word[], int *correctWord);

int hangman()
{
    char word[] = "boire";
    int length = getLength(word), try = 10, win = 0;
    int *correctWord = NULL;
    correctWord = malloc(length * sizeof(int));
    createCorrectWord(length, correctWord);

    printf("Start\n");

    while (try > 0 && !win)
    {
        char letter = askLetter();
        int correctLetter = tryLetter(letter, length, word, correctWord);
        if (correctLetter)
        {
            printf("good : ");
        }
        else
        {
            try--;
            printf("fail : ");
        }
        int amountCorrect = 0;
        for (size_t i = 0; i < length; i++)
        {
            if (correctWord[i] == 1)
            {
                printf("%c", word[i]);
                amountCorrect++;
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");

        if (amountCorrect == length)
        {
            win = 1;
        }
    }
    if (win)
    {
        printf("YOU WIN");
    }
    else
    {
        printf("YOU LOSE");
    }

    free(correctWord);

    return 0;
}

char askLetter()
{
    char letter;
    fgets(&letter, 2, stdin);

    int c = 0; // clean buffer
    while (c != '\n' && c != EOF)
    {
        c = getchar();
    }
    return letter;
}

int getLength(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

void createCorrectWord(int length, int *correctWord)
{
    for (size_t i = 0; i < length; i++)
    {
        correctWord[i] = 0;
    }
}

int tryLetter(char letter, int length, char word[], int *correctWord)
{
    int isCorrect = 0;
    for (size_t i = 0; i < length; i++)
    {
        if (word[i] == letter)
        {
            correctWord[i] = 1;
            isCorrect = 1;
        }
    }
    return isCorrect;
}