#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do {
        height = get_int("Height: ");
    }
    while (height > 8 || height < 1);

    // int height = get_int("Height: ");
    for (int i = 1; i <= height; i++)
    {
        for (int x = i; x < height; x++) {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
