#include <cs50.h>
#include <stdio.h>

void print_row(int bricks);
void number_of_spaces(int bricks);

int main(void)
{
    // Prompt the user for the pyramid's height (as an integer)
    int height;
    do
    {
        height = get_int("Height: ");
    }
    // Make sure that height is positive
    while (height <= 0);

    // Print a pyramid of that height
    for (int i = 0; i < height; i++)
    {
        number_of_spaces(height - i - 1);
        print_row(i + 1);
        printf("\n");
    }
}

void print_row(int bricks)
{
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
}

void number_of_spaces(int spaces)
{
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }
}
