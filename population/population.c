#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start_size;
    do {
        start_size = get_int("Starting size: ");
    }
    while (start_size < 9);

    // TODO: Prompt for end size
    int end_size;
    do {
        end_size = get_int("Ending size: ");
    }
    while (end_size < start_size);

    // TODO: Calculate number of years until we reach threshold
    int years = 0;
    int llamas = start_size;
    while (llamas < end_size) {
        llamas = llamas + (llamas / 3) - (llamas / 4);
        years++;
    }


    // TODO: Print number of years
    printf("Years: %i\n", years);
}
