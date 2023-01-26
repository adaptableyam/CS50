#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int h, r, c, s;

    // do while loop allows get_height to continue running until the condition underneath is met, meaning incorrect inputs are ignored
    do
    {
        //gets the value of h
        h = get_int("Height: ");
    }

    // Makes sure that it is within the range of 1 & 8 inclusive
    while (h < 1 || h > 8);

    // Handles the rows, printing a new line after all of the nested code is complete
    for (r = 0; r < h; r++)
    {
        // Spaces run before the hashes to make it right-alined, num of spaces determined by formula: Space = Height - Row - 1
        for (s = 0; s < h - r - 1; s++)
        {
            printf(" ");
        }

        // prints the hashes in the columns, every time the row is increased, the column initialises back to 0, allowing it to print more hashes
        for (c = 0; c <= r; c++)
        {
            printf("#");
        }

        // fixed number of spaces, hence outside of for loops
        printf("  ");

        // Just handles printing hashes, same code as before, just without the spaces to allow it to be left alined
        for (c = 0; c <= r; c++)
        {
            printf("#");
        }

        printf("\n");

    }



}