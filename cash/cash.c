#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    int num;
    do {
        num = get_int("How many cents: ");
    }
    while (num < 1);
    return num;
}

int calculate_quarters(int cents)
{
    if (cents == 25)
    {
        return 1;
    }
    else if (cents >= 26 && cents <= 49)
    {
        return 1;
    }
    else if (cents >= 50 && cents <= 74)
    {
        return 2;
    }
    else
    {
        return 2;
    }
}

int calculate_dimes(int cents)
{
    if (cents == 10)
    {
        return 1;
    }
    else if (cents >= 11 && cents <= 21)
    {
        return 1;
    }
    else if (cents >= 22 && cents <= 32)
    {
        return 2;
    }
    else if (cents >= 33 && cents <= 43)
    {
        return 3;
    }
    else if (cents >= 44 && cents <= 54)
    {
        return 4;
    }
    else if (cents >= 55 && cents <= 65)
    {
        return 5;
    }
    else if (cents >= 66 && cents <= 76)
    {
        return 7;
    }
    else
    {
        return 7;
    }
}

int calculate_nickels(int cents)
{
    if (cents == 5)
    {
        return 1;
    }
    else if (cents >= 6 && cents <= 11)
    {
        return 1;
    }
    else if (cents >= 12 && cents <= 17)
    {
        return 2;
    }
    else if (cents >= 18 && cents <= 23)
    {
        return 3;
    }
    else if (cents >= 24 && cents <= 29)
    {
        return 5;
    }
    else {
        return 5;
    }
}

int calculate_pennies(int cents)
{
    if (cents == 1)
    {
        return 1;
    }
    else if (cents >= 2 && cents <= 3)
    {
        return 2;
    }
    else if (cents >= 4 && cents <= 5)
    {
        return 4;
    }
    else
    {
        return 3;
    }
}
