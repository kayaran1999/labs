#include <cs50.h>
#include <stdio.h>

#include <cs50>
#include <stdio.h>

int row, column, space;


int main(void)
{
    int height;
    do
    {
        height = get_int("Type the height here: ");
    }
    while (height < 1 || height > 8);

    for(space= 0, space < height - row - column, space++)
    for(row = 0, row < height, r++)
    {
        for(column = 0, column < row, column++)
        {
            printf("#");
        }
        printf("/n");
    }
}
