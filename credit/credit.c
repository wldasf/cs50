#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long x = get_long("Number: ");
    long temp = x;
    temp /= 10;
    int num = 0;
    int num2 = 0;
    while (temp > 0)
    {
        num = temp % 10;
        temp = temp / 100;
        int multi = num * 2;
        printf("%d\n", multi);
    }

    while (x > 0)
    {
        num2 = x % 10;
        x = x / 100;
    }
}
