#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include "utilitises.h"

void askWord(char word[], int length);
void askLetter(char letter[]);
void setupWordCorrect(int *wordCorrect, int length);
int isLetterInWord(char word[], char letter[], int wordCorrect[]);

int hangmanV2(void)
{
    char word[101];
    askWord(word, 101);
    int wordLength = strlen(word);
    int turn = 10;
    int win = 0;
    char letter[2];
    int *wordCorrect = NULL;
    wordCorrect = malloc(wordLength * sizeof(int));
    setupWordCorrect(wordCorrect, wordLength);

    while (turn > 0 && win != wordLength)
    {
        askLetter(letter);

        if (isLetterInWord(word, letter, wordCorrect))
        {
            printf("Bien, ");
        }
        else
        {
            turn--;
            if (turn == 0)
            {
                break;
            }
            printf("Faux, ");
        }
        printf("il vous reste %d essaie.\n", turn);

        for (size_t i = 0; i < wordLength; i++)
        {
            if (wordCorrect[i] == 1)
            {
                printf("%c", word[i]);
                win++;
            }
            else
            {
                printf("*");
                win = 0;
            }
        }
        printf("\n");
    }

    if (win == wordLength)
    {
        printf("YOU WIN");
    }
    else
    {
        printf("YOU WIN");
    }

    free(wordCorrect);
    return 0;
}

void askWord(char word[], int length)
{
    printf("Choisir un mot (max 100 caractere): \n");
    fgets(word, length, stdin);
    if (word[strlen(word) - 1] == '\n')
    {
        word[strlen(word) - 1] = '\0';
    }
    else
    {
        cleanBuffer();
    }
}

void askLetter(char letter[])
{
    printf("Votre lettre : ");
    fgets(letter, 2, stdin);
    printf("\n");

    if (letter[strlen(letter) - 1] == '\n')
    {
        letter[strlen(letter) - 1] = '\0';
    }
    else
    {
        cleanBuffer();
    }
}

void setupWordCorrect(int *wordCorrect, int length)
{
    for (size_t i = 0; i < length; i++)
    {
        wordCorrect[i] = 0;
    }
}

int isLetterInWord(char word[], char letter[], int wordCorrect[])
{
    int isLetterIn = 0;
    for (size_t i = 0; i < strlen(word); i++)
    {
        if (letter[0] == word[i])
        {
            wordCorrect[i] = 1;
            isLetterIn = 1;
        }
    }
    return isLetterIn;
}