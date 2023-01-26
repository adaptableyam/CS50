#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long number, digit1, digit2, digit3, digit4, digit5, digit6, digit7, digit8, digit9, digit10, digit11, digit12, digit13, digit14,
         digit15, digit16;
    int product2, product4, product6, product8, product10, product12, product14, product16, added2, added4, added6, added8, added10,
        added12, added14, added16, total;

    number = get_long("Card number: ");

    // section for defining each individual digit of the card number
    digit1 = (number % 10);

    digit2 = ((number % 100) - (number % 10)) / 10;

    digit3 = ((number % 1000) - (number % 100)) / 100;

    digit4 = ((number % 10000) - (number % 1000)) / 1000;

    digit5 = ((number % 100000) - (number % 10000)) / 10000;

    digit6 = ((number % 1000000) - (number % 100000)) / 100000;

    digit7 = ((number % 10000000) - (number % 1000000)) / 1000000;

    digit8 = ((number % 100000000) - (number % 10000000)) / 10000000;

    digit9 = ((number % 1000000000) - (number % 100000000)) / 100000000;

    digit10 = ((number % 10000000000) - (number % 1000000000)) / 1000000000;

    digit11 = ((number % 100000000000) - (number % 10000000000)) / 10000000000;

    digit12 = ((number % 1000000000000) - (number % 100000000000)) / 100000000000;

    digit13 = ((number % 10000000000000) - (number % 1000000000000)) / 1000000000000;

    digit14 = ((number % 100000000000000) - (number % 10000000000000)) / 10000000000000;

    digit15 = ((number % 1000000000000000) - (number % 100000000000000)) / 100000000000000;

    digit16 = ((number % 10000000000000000) - (number % 1000000000000000)) / 1000000000000000;

    // Gives invalid response if card number is not between 13 and 16 digits
    if (number < 1000000000000 || number > 9999999999999999)
    {
        printf("INVALID\n");
    }

    else
    {
        // section for creating variables of the digits * 2
        product2 = digit2 * 2;

        product4 = digit4 * 2;

        product6 = digit6 * 2;

        product8 = digit8 * 2;

        product10 = digit10 * 2;

        product12 = digit12 * 2;

        product14 = digit14 * 2;

        product16 = digit16 * 2;

        // section for adding the digits of the products together, as if the number is 6 or higher, we'd need to add the individual digits of the double-digit number
        added2 = (((product2 % 100) - (product2 % 10)) / 10 + (product2 % 10));

        added4 = (((product4 % 100) - (product4 % 10)) / 10 + (product4 % 10));

        added6 = (((product6 % 100) - (product6 % 10)) / 10 + (product6 % 10));

        added8 = (((product8 % 100) - (product8 % 10)) / 10 + (product8 % 10));

        added10 = (((product10 % 100) - (product10 % 10)) / 10 + (product10 % 10));

        added12 = (((product12 % 100) - (product12 % 10)) / 10 + (product12 % 10));

        added14 = (((product14 % 100) - (product14 % 10)) / 10 + (product14 % 10));

        added16 = (((product16 % 100) - (product16 % 10)) / 10 + (product16 % 10));


        total = (added2 + added4 + added6 + added8 + added10 + added12 + added14 + added16 + digit1 + digit3 + digit5 + digit7 + digit9 +
                 digit11 + digit13 + digit15);

        // this checks if the last digit of the total is a 0
        if (total % 10 == 0)
        {
            // this is the 16 digit visa check
            if (digit16 == 4)
            {
                printf("VISA\n");
            }

            // if a 16 digit number isnt a visa, this checks if it's a mastercard
            else if (digit16 == 5)
            {
                if (digit15 == 1 || digit15 == 2 || digit15 == 3 || digit15 == 4 || digit15 == 5)
                {
                    printf("MASTERCARD\n");
                }

                else
                {
                    printf("INVALID\n");
                }
            }

            else
            {
                // checks if it is an AMEX
                if (digit15 == 3)
                {
                    if (digit14 == 4 || digit14 == 7)
                    {
                        printf("AMEX\n");
                    }

                    else
                    {
                        printf("INVALID\n");
                    }
                }

                // checks if it's 13 digit visa
                else if (number < 10000000000000)
                {
                    if (digit13 == 4)
                    {
                        printf("VISA\n");
                    }

                    else
                    {
                        printf("INVALID\n");
                    }
                }

                else
                {
                    printf("INVALID\n");
                }

            }
        }

        else
        {
            printf("INVALID\n");
        }



    }



}