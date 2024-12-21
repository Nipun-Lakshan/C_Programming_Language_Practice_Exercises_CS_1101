/* ASCII Character Map */

#include <stdio.h>

int main()

{

    // Variable Declaration

    unsigned char character;
    int i;
    int count = 0;

    // Header String Formatting

    printf("\n=====================================");
    printf("\nASCII Code - Character Map in a Table");
    printf("\n=====================================\n\n");

    // Print as a table

    for (i = 0; i < 6; i++)
    {
        printf("+----+---------");
    }
    printf("+\n");

    for (i = 0; i < 6; i++)
    {
        printf("| No |Character");
    }
    printf("|\n");

    for (i = 0; i < 6; i++)
    {
        printf("+----+---------");
    }
    printf("+\n");

    character = 26;
    printf("|  %d|    %c    ", character, character);

    for (character = 33; character < 38; character++)
    {
        printf("|  %d|    %c    ", character, character);
    }
    printf("|\n");

    for (character = 38; character <= 126; character++)
    {
        count++;
        if (character < 100)
        {
            printf("|  %d|    %c    ", character, character);
        }
        else
        {
            printf("| %d|    %c    ", character, character);
        }
        if (count == 6)
        {
            printf("|\n");
            count = 0;
        }
    }

    character = 128;
    printf("| %d|    %c    |\n", character, character);
    count = 0;

    for (character = 129; character <= 254; character++)
    {
        count++;
        printf("| %d|    %c    ", character, character);
        if (count == 6)
        {
            printf("|\n");
            count = 0;
        }
    }

    for (i = 0; i < 6; i++)
    {
        printf("+----+---------");
    }
    printf("+\n");

    return 0;
}